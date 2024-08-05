let list_arr = [];
const getData = () => {
    let data = JSON.parse(localStorage.getItem("categoryInfo"))
    let getvalue = document.getElementById("addcategory").value;
    let len_id = data != null ? data.length+1 : 1;
    let obj = {
        id:len_id,
        name:getvalue
    }
    list_arr.push(obj);
    let convert_data = JSON.stringify(list_arr)
    localStorage.setItem("categoryInfo",convert_data)
    document.getElementById("addcategory").value = '';
    displayData();
}

// Display Items in Table
const displayData = () => {
    let data = JSON.parse(localStorage.getItem("categoryInfo"))
    let tr = '';
    if(data != null){
        data.map((i) => {
            tr += `<tr>
                <th style="text-align: center;">${i.id}</th>
                <td>${i.name}</td>
                <td>
                    <button class="btn btn-info">Edit</button>
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