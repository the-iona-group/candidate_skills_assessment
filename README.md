# The Iona Group, Drupal Skills Assessment

The contents of this repository are a standard Drupal 7 install, with the following contrib and custom modules.

* Context
* Chaos Tools
* Date
* Entity API
* Entity Cache
* Entity Reference
* Features
* Libraries
* Panels
* Schema
* Services
* Strongarm
* Token
* Views
* Iona Widget

The Iona Widget module defines a custom schema table and associated drupal entity. This allows storing information about "widgets"
in the system. Also included in the module is a basic form for adding widgets to the system.

## Tasks outline

The tasks for this exercise are as follows:

1. Install the site locally and enable the included modules. The default Bartik theme can be used.
2. Add two new properties to the widget schema:
   * Date available. A date a widget will be available to the public.
3. Modify the add widget form to include the new widget property, ensuring the date available field is required.
4. Create a page based view that lists all widgets currently in the system. This view should display each property of a widget (name, description, and date available) in separate columns, as well as an additional column that contains a link to view the associated widget. This view should be exported to a new feature, and the resulting feature added to the repository.
5. Create a new custom menu that includes a link to the widget listing view and the add widget form. This menu should only display on the front page of the site, and be added to the feature created in step 4.
6. Add a custom permission that will control who can add a widget in the system. Update the add widget menu item to restrict access to users who have this permission. Additionally, add a permission to the view created in step 4 so that only logged in users can access it.
