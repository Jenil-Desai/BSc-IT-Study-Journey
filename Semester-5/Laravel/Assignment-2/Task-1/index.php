<?
  spl_autoload_register(function ($class_name) {
    include 'class/'.$class_name . '.php';
  });

  $post = new Post("Post Title", "Post Body");
  $author = new Author("Author Name", "author@example.com");
  $category = new Category("Category Name", "Category Description");
?>
