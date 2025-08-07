<?
interface DatabaseInterface
{
  public function connect();
  public function query($sql);
  public function disconnect();
}

class NextUpProduct implements DatabaseInterface
{
  public function connect()
  {
    echo "Connecting to the database...";
  }

  public function query($sql)
  {
    echo "Executing query: $sql";
  }

  public function disconnect()
  {
    echo "Disconnecting from the database...";
  }
}

$product = new NextUpProduct();
$product->connect();
$product->query("SELECT * FROM products");
$product->disconnect();
