# What I've Learned: HTML & CSS Practices

This module helped me gain a comprehensive understanding of HTML and CSS, focusing on structuring web pages, styling elements, and using various CSS techniques to create a well-designed, responsive webpage. Below are the key learnings from the tasks:

## 1. **Basic HTML Structure**
   - **HTML Document Structure:** 
     I learned how to structure a basic HTML document starting with `<!DOCTYPE html>`, followed by the `<html>`, `<head>`, and `<body>` tags. These define the page's structure and organize content into a format that browsers can render.
     - The `<head>` contains meta-information (e.g., charset, viewport settings), the title of the page, and links to external files (like CSS).
     - The `<body>` holds the visible content, such as text, images, and interactive elements.
   
   - **Common HTML Tags:** 
     I became familiar with a variety of HTML tags that help structure content, such as:
     - `<h1>`, `<h2>`, `<h3>`: Headings that define the hierarchy of the document.
     - `<p>`: Paragraphs for general text.
     - `<ul>`, `<li>`: Lists for organizing information.
     - `<span>`: Inline elements used to style specific parts of text.
   
   - **Meta and Title Tags:** 
     I learned how to set meta tags for proper text encoding (`<meta charset="UTF-8">`) and responsive design (`<meta name="viewport" content="width=device-width, initial-scale=1.0">`), which ensures proper rendering across different devices.

## 2. **CSS Styling Techniques**
   CSS (Cascading Style Sheets) is used to style the structure created with HTML. This module introduced me to several important CSS techniques for applying styles:

   - **Inline CSS:** 
     The `style` attribute within an HTML tag allows for quick, one-off styles directly on an element. For example, in the `basic.html`, inline CSS was applied to the `<h4>` tag, specifying background color, font size, and text alignment.

   - **Internal CSS:** 
     Using the `<style>` tag within the `<head>` of the document allows for styles to be scoped to the specific HTML document. This is useful when styles are unique to that document and won't be reused across multiple pages.
   
   - **External CSS:** 
     An external `.css` file (e.g., `style.css`) was linked to the HTML file using the `<link>` tag. This method allows for consistent styling across multiple web pages by applying the same stylesheet to all of them.

## 3. **CSS Selectors and Specificity**
   I explored different ways to target HTML elements and apply styles using CSS selectors:

   - **Universal Selector (`*`):** 
     The universal selector applies styles to all elements within the document. For example, the `*` selector was used to set a base font-family and background color for all elements.
   
   - **ID Selector (`#`):** 
     By assigning unique IDs to elements (e.g., `#head`), I could target and apply specific styles to those elements. IDs should be unique within a document, making them ideal for individual elements like headers or specific sections.
   
   - **Class Selector (`.`):** 
     The class selector targets multiple elements with the same class. For instance, classes like `.para-one`, `.para-two`, and `.para-three` were used to style different paragraphs in the same way, but without impacting other elements.
   
   - **Tag Selector:** 
     This applies styles to all elements of a specific type (e.g., all `<h1>`, all `<p>` tags). It’s useful for styling generic elements without needing a class or ID.

   - **Specificity:** 
     I learned that CSS rules are applied based on specificity, where ID selectors have higher specificity than class selectors, and class selectors have higher specificity than tag selectors.

## 4. **Layout and Design with CSS**
   This section focused on designing a webpage by styling elements using the CSS box model and other layout techniques:

   - **Box Model:** 
     I learned about the CSS box model, which includes `margin`, `border`, `padding`, and `content`:
     - **Margin:** The outermost space around an element.
     - **Border:** Surrounds the element’s content and padding.
     - **Padding:** The inner space between the element’s content and its border.
     - **Content:** The actual content inside the element.

   - **Background Images and Colors:** 
     I used `background-color` to set solid background colors and `background-image` with properties like `background-size` and `background-repeat` to add visual interest to sections. This helped me style elements with both colors and images, improving visual appeal.

   - **Typography:** 
     I styled text using properties like `font-family`, `font-size`, `font-weight`, and `text-align`. By adjusting font sizes, weight, and family, I learned how to control the visual hierarchy and readability of text content.

   - **Borders and Box Shadows:** 
     I added visual emphasis to elements by styling borders with varying thickness and color, and using `border-radius` to round the corners. Additionally, I applied `box-shadow` to create depth and make elements stand out.

## 5. **Task-Specific Challenges**
   In the tasks, I applied CSS to solve real-world web design problems:

   - **Task 1:** 
     I applied inline, internal, and external CSS styles to three different paragraphs, each using different types of CSS (inline, internal, and external) to apply different styles.
   
   - **Task 2:** 
     I designed a webpage with headings, paragraphs, and lists, and used CSS to adjust text alignment, font styles, sizes, and colors for different elements.
   
   - **Task 3:** 
     This task allowed me to use various CSS selectors (ID, class, universal, tag) to target specific elements and apply unique styles to them.

   - **Task 4:** 
     I worked on creating sections with background images, colors, and custom positioning. The goal was to style sections differently using the background properties of CSS.
   
   - **Task 5:** 
     I applied borders, box shadows, and rounded corners using `border-radius` and `box-shadow` to style divs and paragraphs.
   
   - **Task 6:** 
     I learned to use display properties (`none`, `hidden`, `inline`, `block`, and `inline-block`) to control element visibility and layout behavior. These properties are essential for managing the visibility and flow of content on a webpage.

## 6. **Practical Use of Web Design Principles**
   - **Responsive Design:** 
     I used CSS properties like `background-size: cover;` and relative units (e.g., percentages) to create layouts that adjust to different screen sizes. This is a critical skill in building websites that work across desktop and mobile devices.

   - **Semantic HTML:** 
     I used HTML tags appropriately (e.g., `<header>`, `<footer>`, `<section>`, `<article>`) to improve the accessibility and search engine optimization (SEO) of my web pages.

   - **Cross-Browser Compatibility:** 
     I made sure that the design would render consistently across different browsers by using standard CSS properties and ensuring proper use of selectors.

## 7. **General Best Practices**
   - **Separation of Concerns:** 
     I kept my HTML, CSS, and JavaScript separate to maintain clean code and easier debugging. This also helps when the project scales and requires multiple developers working on the same codebase.
   
   - **Accessibility:** 
     I kept accessibility in mind by using appropriate HTML tags for navigation, structure, and ensuring text contrast and font sizes were readable.

---

By completing this module, I gained hands-on experience with creating structured HTML pages and styling them with CSS. I also developed an understanding of the importance of clean, maintainable code and best practices for web design.
