# What I've Learned: HTML & CSS Practices

This module covers fundamental concepts in HTML and CSS, focusing on creating structured, well-designed webpages. Below is a comprehensive breakdown of what I’ve learned:

## 1. **Basic HTML Structure**
   - **Document Structure:** I learned how to set up a basic HTML document with `<!DOCTYPE html>`, followed by the root `<html>` element. The `<head>` section contains metadata, including the document's character set, viewport settings, and links to external resources (like stylesheets). The `<body>` tag is where all visible content of the webpage is placed.
   - **Headings and Paragraphs:** Using tags like `<h1>`, `<h2>`, `<p>`, and others, I structured the page to organize content hierarchically. `<h1>` is typically reserved for the main heading, while subsequent headings (`<h2>`, `<h3>`, etc.) define sub-sections.
   - **Lists and Links:** Learned how to create ordered (`<ol>`) and unordered (`<ul>`) lists with list items (`<li>`). Hyperlinks were added using the `<a>` tag, linking to external pages or sections within the same page.

## 2. **CSS Styling Techniques**
   - **Inline CSS:** I applied styles directly to individual elements using the `style` attribute. While this approach is quick, it is less efficient for large projects as it doesn’t allow for global styling.
   - **Internal CSS:** Inside the `<style>` tag within the `<head>` section, I defined CSS rules that apply to elements within that document. This is useful for smaller projects where only one HTML file is used.
   - **External CSS:** By linking an external `.css` file using the `<link>` tag, I ensured that my styles are separated from the HTML content, allowing for easier management and reusability across multiple HTML files.

## 3. **CSS Selectors and Specificity**
   - **Universal Selector (`*`):** This selector targets all elements in the document and allows me to apply styles globally. I used it to apply common styles like background color and font family.
   - **ID Selector (`#`):** The ID selector targets elements with specific `id` attributes. Since IDs must be unique within a page, this selector is useful for applying styles to specific elements.
   - **Class Selector (`.`):** I used class selectors to apply styles to multiple elements that share the same class. This is helpful for styling groups of elements consistently.
   - **Tag Selector:** The tag selector targets elements of a specific type, such as all `<p>` or `<h1>` elements, and applies a set of styles to all instances of that tag.
   - **Combining Selectors:** I experimented with combining multiple selectors to target specific elements more efficiently and with higher specificity, ensuring precise control over element styling.

## 4. **Layout and Design with CSS**
   - **Box Model:** I gained a deep understanding of the CSS box model, which defines how elements are structured and spaced. The model includes content, padding, border, and margin. By adjusting these properties, I controlled the spacing and appearance of elements.
   - **Backgrounds and Images:** I learned how to use `background-image`, `background-size`, and `background-position` to set background images for elements. This allows for visually appealing designs where elements can have images as their background, and I can control how these images appear (e.g., cover, contain, repeat).
   - **Border and Border Radius:** I applied `border`, `border-radius`, and `box-shadow` properties to create visual depth and rounded corners for elements, adding to the aesthetics and usability of the page.
   - **Typography:** I experimented with different fonts by using the `font-family`, `font-size`, `font-weight`, and `font-style` properties. This allowed me to create emphasis (e.g., bold or italicized text), and I explored using both web-safe fonts (like Arial) and custom fonts (like "Gill Sans").

## 5. **Task-Specific Challenges**
   - **Task 1:** Applied inline, internal, and external CSS styles to paragraphs with various visual properties like background colors, font sizes, text alignment, borders, and padding.
   - **Task 2:** Designed a webpage with headings, paragraphs, and lists. I applied specific CSS properties to customize text colors, fonts, text alignment, and spacing for these elements.
   - **Task 3:** Implemented various CSS selectors (ID, class, universal, and tag) to apply styles to different HTML elements. For example, I used the `#head` ID selector to style the header, while applying the `.para-one` class selector to style multiple paragraphs.
   - **Task 4:** Worked on sections with specific background colors, images, and sizes. I used background-related properties to set images, position them, and control how they scale and repeat across sections.
   - **Task 5:** Styled multiple elements, including divs and paragraphs, with different borders, shadow effects, and rounded corners. I applied `border-radius` and `box-shadow` to create clean, modern designs.
   - **Task 6:** Applied various **display** properties (`none`, `hidden`, `inline`, `block`, and `inline-block`) to control the visibility and layout of elements. This allowed me to hide or display elements as needed and manipulate how they are displayed in the flow of the document.

## 6. **Practical Use of Web Design Principles**
   - **Responsive Design:** I began to focus on how different elements should adjust based on screen size. For example, I used relative units (`%`, `em`, `vw`, `vh`) in conjunction with fixed units (`px`) to ensure content displays properly on various devices.
   - **Cross-Browser Compatibility:** Ensured that my CSS was compatible with different browsers by following best practices and avoiding browser-specific hacks. This helped in maintaining consistent visual appearances across platforms.

## 7. **General Best Practices**
   - **Semantic HTML:** I used meaningful HTML tags that describe the content (e.g., `<header>`, `<nav>`, `<footer>`) rather than generic ones like `<div>` and `<span>`. This improves accessibility and search engine optimization (SEO).
   - **Separation of Concerns:** By keeping HTML content and CSS styling in separate files (external CSS), I maintained clean code, which made the page easier to manage and debug.
   - **Consistent Naming Conventions:** I adhered to consistent naming conventions for classes and IDs (e.g., using camelCase or hyphen-separated names) to make the code more readable and maintainable.
