let list_arr = [];
const getData = () => {
    let data = JSON.parse(localStorage.getItem("userInfo"))
    let getname = document.getElementById("addname").value;
    let getage = document.getElementById("addage").value;
    let getsalary = document.getElementById("addsalary").value;
    
    let len_id = data != null ? data.length+1 : 1;
    let obj = {
        id:len_id,
        name:getname,
        age:getage,
        salary:getsalary
    }
    list_arr.push(obj);
    let convert_data = JSON.stringify(list_arr)
    localStorage.setItem("userInfo",convert_data)
    document.getElementById("addname").value = '';
    document.getElementById("addage").value = '';
    document.getElementById("addsalary").value = '';
    displayData();
}

// Display items in table
const displayData = () => {
    let data = JSON.parse(localStorage.getItem("userInfo"));
    let tr = '';
    if(data != null){
        data.map((i) => {
            tr += `<tr>
                <th>${i.id}</th>
                <td>${i.name}</td>
                <td>${i.age}</td>
                <td>${i.salary}</td>
                <td>
                    <button class="btn btn-info">Edit</button>
                    <button class="btn btn-danger" onclick="deleteData(${i.id})">Delete</button>
                </td>
            </tr>`;
        })
    }
    document.getElementById("catdata").innerHTML = tr;
}
displayData()

const deleteData = (id) => {
    let data = JSON.parse(localStorage.getItem("userInfo"));
    let final_res = data.filter((i) => {
        return i.id != id
    })
    let j = 1;
    let arr = final_res.map((i) => {
        i.id = j++;
        return i;
    })
    let convert_data = JSON.stringify(arr)
    localStorage.setItem("userInfo",convert_data)
    displayData();
}