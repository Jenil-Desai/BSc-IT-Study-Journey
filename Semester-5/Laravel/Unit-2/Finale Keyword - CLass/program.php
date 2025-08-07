<?
  final class SystemLogger {
    public function log($message) {
        echo "Log: " . $message . "\n";
    }
  }

  $logger = new SystemLogger();
  $logger->log("This is a final class example.");
?>
