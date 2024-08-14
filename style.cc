/* General body styles */
body {
    font-family: Arial, sans-serif;
    background-color: #f4f4f4;
    display: flex;
    justify-content: center;
    align-items: center;
    height: 100vh;
    margin: 0;
}

/* Container for the form */
.form-container {
    background-color: #ffffff;
    border-radius: 4px;
    padding: 20px;
    box-shadow: 0 0 10px rgba(0, 0, 0, 0.1);
    width: 300px;
}

/* Style the form elements */
form {
    display: flex;
    flex-direction: column;
}

/* Style the labels */
label {
    margin-bottom: 5px;
    font-size: 14px;
}

/* Style the input fields */
input[type="text"] {
    border: 1px solid #ccc;
    border-radius: 4px;
    padding: 8px;
    margin-bottom: 15px;
    font-size: 14px;
}

/* Style the submit button */
input[type="submit"] {
    background-color: #007bff;
    border: none;
    border-radius: 4px;
    color: #ffffff;
    padding: 10px;
    font-size: 14px;
    cursor: pointer;
}

input[type="submit"]:hover {
    background-color: #0056b3;
}
