<!DOCTYPE html>
<html lang="en">

<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>

<body>

  <h1>Hospital Management System</h1>

  <h2>Overview</h2>

  <p>This C++ program serves as a simple hospital management system, offering functionality to manage patients across
    various medical departments. The program uses enums to represent different departments and patient statuses,
    providing a user-friendly menu for actions such as adding patients, picking up patients, and viewing the patient
    list.</p>

  <h2>Features</h2>

  <ul>
    <li>Add patients to specific medical departments.</li>
    <li>Pick up patients from departments.</li>
    <li>Print the current list of patients for each department.</li>
    <li>Basic menu-driven user interface.</li>
  </ul>

  <h2>Usage</h2>

  <ol>
    <li><strong>Compile the Program:</strong></li>
    <code>g++ hospital_system.cpp -o hospital_system</code>

    <li><strong>Run the Program:</strong></li>
    <code>./hospital_system</code>

    <li><strong>Follow the Menu:</strong></li>
    <ul>
      <li>Choose options to add patients, pick up patients, or print the patient list.</li>
      <li>Specify the department and other details as prompted.</li>
    </ul>
  </ol>

  <h2>Departments and Patient Status</h2>

  <p>The program uses enums to represent medical departments and patient statuses:</p>

  <ul>
    <li><strong>Medical Departments:</strong>
      <ul>
        <li>CARDIOLOGY, DERMATOLOGY, ENDOCRINOLOGY, ..., PSYCHIATRY</li>
      </ul>
    </li>
    <li><strong>Patient Status:</strong>
      <ul>
        <li>REGULAR</li>
        <li>IRREGULAR</li>
      </ul>
    </li>
  </ul>

  <h2>Limitations</h2>

  <ul>
    <li>Each department can accommodate up to 5 patients.</li>
    <li>The system does not persist data after program execution.</li>
  </ul>

  <h2>Contribution</h2>

  <p>Feel free to contribute to the improvement of this hospital management system. Create a fork, make your changes, and
    submit a pull request.</p>

  <h2>License</h2>

  <p>This project is licensed under the <a href="LICENSE">MIT License</a>.</p>

</body>

</html>

