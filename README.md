# Task Manager
 
 > Authors: [Nicholas Chao](https://github.com/nibchao), [Jorge Gonzalez Quiroz](https://github.com/JorgeNova-1), [Denitca Grozeva](https://github.com/DeniGroz), [Edgar Tapia](https://github.com/Etapi017)

## Project Description
 > * We will be using the Linux terminal along with GitHub. This includes the tools and resources in them. 
 > * The language we will use is C++.
 > * The project we chose to do is a task manager. We chose this project because it was the most useful out of the given project options and could see use outside of this class to increase our productivity.
 > * The input of this project is the user being able to create tasks and task lists, along with editing any of these created tasks or task lists. The output of the project should be a way for the user to visualize all of their created tasks or task lists. 
 >   * The tasks will have the following customizable options: title, description, classification, priority, duration and due date; some will be optional and some will be required.  
 
 ## UML Class Diagram
![Alt text](https://raw.githubusercontent.com/cs100/final-project-nchao006-etapi017-dgroz002-jgonz503/master/cs100%20final%20project%20UML%20diagram.png?token=GHSAT0AAAAAABNSCLWDZRBWKKG2IUOHCGP6YQ6WNWA)
- This is our UML diagram for what we think we'll create to make the Task Manager. 
- If all of these classes are implemented correctly, then all the notes in the backlog category on the kanban board should be completed. 
- There is a main class that handles displaying the tasks and tasklists, the TaskList class that handles all TaskList operations, and printTask classes that are interfaces for each task classification type, the generalTask class handles all Task operations and also has three classes that inherit from it to create each type of task classification.
 
 ## Design Patterns
 > The design patterns we plan to use and implement are the composite design pattern (printTasks + the 3 branching classes right of it)and strategy design pattern (generalTask + the 3 branching classes below it). 
 > We decided on using both of these design patterns together because it helped us break down the code that we planned to implement for this Task Manager project. The strategy design pattern allows us to split a general task that contains many shared functions into three specific classifications based on what was given in the project idea prompt. We can then make each of these tasks unique in their own classes and make them fit as necessary. The composite design pattern allows us to split up the printTask function into three separate classes that can be modified to print out the different information that each task classification may have. Both of these should help us to write better code because we will not be repeating the same functions over and over in each type of task classification and will not be coding the three task classifications inside just a single task class.

 ## Final deliverable
 > All group members will give a demo to the TA/reader during lab time. The TA/reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
