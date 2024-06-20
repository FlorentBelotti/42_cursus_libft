<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body>
    <header>
        <h1>42_cursus_libft</h1>
        <p>Your very own library for future C projects at 42 School.</p>
    </header>
    <nav>
        <h2>Table of Contents</h2>
        <ul>
            <li><a href="#introduction">Introduction</a></li>
            <li><a href="#common-rules">Common Rules</a></li>
            <li><a href="#mandatory-part">Mandatory Part</a></li>
            <li><a href="#bonus-part">Bonus Part</a></li>
            <li><a href="#compilation">Compilation</a></li>
            <li><a href="#feedback">Feedback</a></li>
        </ul>
    </nav>
    <section id="introduction">
        <h2>Introduction</h2>
        <p>The Libft project aims to help you code a C library consisting of common utility functions that you will reuse in your future projects. This will enhance your understanding of low-level programming and familiarize you with useful standard functions.</p>
    </section>
    <section id="common-rules">
        <h2>Common Rules</h2>
        <ul>
            <li>The project must be written in C.</li>
            <li>Code must adhere to the Norm.</li>
            <li>Functions should not stop unexpectedly (segmentation faults, bus errors, etc.) except for undefined behaviors.</li>
            <li>Memory leaks will not be tolerated.</li>
            <li>All submissions must include a Makefile which compiles the source files with the flags -Wall, -Wextra, and -Werror.</li>
            <li>The Makefile must not relink.</li>
        </ul>
    </section>
    <section id="mandatory-part">
        <h2>Mandatory Part</h2>
        <p>Create your own library libft.a that includes the following functions, which are detailed in the project description:</p>
        <ul>
            <li>Memory functions (e.g., <code>ft_memset</code>, <code>ft_memcpy</code>)</li>
            <li>String manipulation functions (e.g., <code>ft_strlen</code>, <code>ft_strdup</code>)</li>
            <li>Character type checking (e.g., <code>ft_isalpha</code>, <code>ft_isdigit</code>)</li>
            <li>More complex functions (e.g., <code>ft_substr</code>, <code>ft_strjoin</code>)</li>
        </ul>
    </section>
    <section id="bonus-part">
        <h2>Bonus Part</h2>
        <p>If the mandatory part is perfect, you can extend your library with additional features such as list manipulation functions:</p>
        <ul>
            <li><code>ft_lstnew</code>: Creates a new list.</li>
            <li><code>ft_lstadd_front</code>: Adds an element at the beginning of a list.</li>
            <li><code>ft_lstsize</code>: Counts the elements of a list.</li>
            <li><code>ft_lstlast</code>: Returns the last element of a list.</li>
        </ul>
    </section>
    <section id="compilation">
        <h2>Compilation</h2>
        <p>Compile the library using the Makefile provided, ensuring all rules like <code>all</code>, <code>clean</code>, <code>fclean</code>, and <code>re</code> are present to manage the library properly.</p>
    </section>
    <section id="feedback">
        <h2>Feedback</h2>
        <p>The libft is a continuation of what was done during the piscine. Consequently, it is not particularly difficult to implement. I strongly suggest doing the bonus tasks, which provide a simple first approach to linked lists, and more generally to data structures, concepts that will prove useful later on.</p>
    </section>
</body>
</html>
