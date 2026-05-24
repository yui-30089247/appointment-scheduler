# Final reflection

## Prompt 1: Plan vs Reality
## Original feature plan
- Feature 1: Add New Appointment - Done
- Feature 2: View Appointments - Done 
- Feature 3: Edit an Appointment - Done
- Feature 4: Delete an Appointment - Stubbed
- Feature 5: Search an Appointment - Stubbed
I found dealing with date and time to be challenging. At first, I implemented separate Date and Time classes, but this made validating user date-time input more difficult. After discussing the issue with my professor, I learned to use epoch time and store it as an integer instead. This approach simplified validation and made data handling much more efficient. 

## Prompt 2: Design Decisions You Would Change
I would make Person class where multiple users can make appointments. 

## Prompt 3: What You Learned
- Technical:
I learned how to use epoch time for handling dates and times. I found that using epoch time simplifies time calculations and allows data to be stored more efficiently. While implementing it, I also gained experience using the chrono library.

- Design: 
By designing classes independently, I gained a deeper understanding of software design principles such as encapsulation and data hiding.

- Process:
I learned about the software development process, such as creating implementation documents, implementing features, testing them, and documenting completed and incomplete features. I found this process very useful to keep track of my progress.

## Prompt 4: What's Left to Finish
- Feature 4: Delete an Appointment - Stubbed
- Feature 5: Search an Appointment - Stubbed
I think these two features are fundamental functionalities of the application

## Prompt 5: Workflow Reflection
The workflow, feature-branch / pull-request / self-review / merge workflow, has become natural for me through this project. When working with other developers, handling merge conflict woule be challenging. 

## Prompt 6: AI Use
I used AI for class designing, and it was useful because it not only suggested a design but also explained why it chose that approach and broke down the code line by line. I also learned that the more specific and concrete my prompts are, the better the AI’s suggestions become.
