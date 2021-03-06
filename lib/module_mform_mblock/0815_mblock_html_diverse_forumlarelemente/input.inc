<?php

// this modul input is an example for use easy html form

// base ID
$id = 1;

// html form
$form = <<<EOT
    <fieldset class="form-horizontal ">
        <legend>Text Inputs</legend>
        <div class="form-group">
            <div class="col-sm-2 control-label"><label>Input Text1</label></div>
            <div class="col-sm-10"><input type="text" name="REX_INPUT_VALUE[$id][0][test1]" value="" class="form-control "></div>
        </div>
        <div class="form-group">
            <div class="col-sm-2 control-label"><label>Input Text2</label></div>
            <div class="col-sm-10"><input type="text" name="REX_INPUT_VALUE[$id][0][test2]" value="" class="form-control "></div>
        </div>
        <div class="form-group">
            <div class="col-sm-2 control-label"><label>Textarea Text3</label></div>
            <div class="col-sm-10"><textarea name="REX_INPUT_VALUE[$id][0][test3]" class="form-control "></textarea></div>
        </div>
    </fieldset>
    <fieldset class="form-horizontal ">
        <legend>Select elements</legend>
        <div class="form-group">
            <div class="col-sm-2 control-label"><label>Select</label></div>
            <div class="col-sm-10">
                <select name="REX_INPUT_VALUE[$id][0][test4]" class="form-control ">
                    <option value="1">test-1</option>
                    <option value="2">test-2</option>
                    <option value="3">test-3</option>
                    <option value="4">test-4</option>
                </select>
            </div>
        </div>
        <div class="form-group">
            <div class="col-sm-2 control-label"><label>Select optgroup</label></div>
            <div class="col-sm-10">
                <select name="REX_INPUT_VALUE[$id][0][test5]" class="form-control ">
                    <optgroup label="group 1">
                        <option value="1">test-1</option>
                        <option value="2">test-2</option>
                    </optgroup>
                    <optgroup label="group 2">
                        <option value="3">test-3</option>
                        <option value="4">test-4</option>
                    </optgroup>
                </select>
            </div>
        </div>
    </fieldset>
EOT;

// parse form
echo MBlock::show($id, $form);

?>
