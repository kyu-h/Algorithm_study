<?php
    $current = "";
    $answer = "";

    echo "gogo";

    $current = $_POST['cppcode'];
    $file = "hello.c";
    file_put_contents($file, $current);

    putenv("PATH=C:\\Program Files (x86)\\mingw-w64\\i686-7.3.0-posix-dwarf-rt_v5-rev0\\mingw32\\bin");

    shell_exec("gcc hello.c -o hello.exe");

    $answer = shell_exec("hello.exe");
?>

<style>
    .txtarea {
        resize: none;
        outline: none;
        width : 300px;
        height: 400px;
        border: 3px solid #cccccc;
        padding: 5px; font-family: Tahoma, sans-serif;
        background-position: bottom right;
        background-repeat: no-repeat;
        font-size: 25px;
        color: #ffffff;
    }
</style>

<form method="POST">
    <textarea name = "cppcode" style = "background:red;" placeholder = "Enter C code" class="txtarea"><?php echo $current; ?> </textarea>
    <input type="submit" value="Run">
    <textarea name = "cppcode2" style = "background:blue;" placeholder = "see result" disabled class="txtarea"><?php echo $answer; ?> </textarea>
</form>