let list_arr = [];
const getData = () => {
    let data = JSON.parse(localStorage.getItem("categoryInfo"))
    let getvalue = document.getElementById("addcategory").value;
    let getid = document.getElementById("hiddenid").value;
    let image = localStorage.getItem("catImage");
    let len_id = data != null ? data.length+1 : 1;
    
    if(getid != ''){
        // update
        let updateData = data.map((i) => {
            if(i.id == getid){
                i.name = getvalue;
                i.image = (image!=null)?image:i.image;
            }
            return i;
        })
        list_arr = updateData;
    } else {
        // insert
        let image = localStorage.getItem("catImage");
        let obj = {
            id:len_id,
            name:getvalue,
            image:image
        }
        list_arr.push(obj);
    }
    
    let convert_data = JSON.stringify(list_arr)
    localStorage.setItem("categoryInfo",convert_data);
    document.getElementById("addcategory").value = '';
    document.getElementById("categoryimg").value = '';
    document.getElementById("dispImg").src = '';
    // image
    localStorage.removeItemItem("catImage");
    displayData();
}

// Display Items in Table
const displayData = () => {
    let data = JSON.parse(localStorage.getItem("categoryInfo"))
    let tr = '';
    if(data != null){
        data.map((i) => {
            tr += `<tr style="text-align: center;">
                <th style="text-align: center;">${i.id}</th>
                <td><img src="${i.image}" height="50px" width="50px" /></td>
                <td>${i.name}</td>
                <td>
                    <button class="btn btn-info" onclick="editData(${i.id})">Edit</button>
                    <button class="btn btn-danger" onclick="deleteData(${i.id})">Delete</button>
                </td>
            </tr>`;
        })
    }
    document.getElementById("catdata").innerHTML = tr;
}
// displayData()

const deleteData = (id) => {
    let data = JSON.parse(localStorage.getItem("categoryInfo"))
    let final_res = data.filter((i) => {
        return i.id != id
    })
    let j = 1;
    let arr = final_res.map((i) => {
        i.id = j++;
        return i;
    })
    let convert_data = JSON.stringify(arr)
    localStorage.setItem("categoryInfo",convert_data);
    displayData()
}
displayData()

const editData = (id) => {
    let data = JSON.parse(localStorage.getItem("categoryInfo"))
    let final_res = data.find((i) => {
        return i.id == id
    })
    document.getElementById("addcategory").value = final_res.name;
    document.getElementById("dispImg").src = final_res.image;
    document.getElementById("hiddenid").value = id;
    // let id_res = document.getElementById("hiddenid").value = id;

}

const saveImgUrl = (event) => {
    var reader = new FileReader();
    reader.onload = function () {
        var output = document.getElementById("dispImg");
        localStorage.setItem("catImage",reader.result);
        output.src = reader.result;
    };
    reader.readAsDataURL(event.target.files[0]);
}