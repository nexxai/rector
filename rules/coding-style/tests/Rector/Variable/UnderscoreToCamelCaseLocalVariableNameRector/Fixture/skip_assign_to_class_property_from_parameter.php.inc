<?php

namespace Rector\CodingStyle\Tests\Rector\Variable\UnderscoreToCamelCaseLocalVariableNameRector\Fixture;

final class AssignToClassProperty
{
    public function run($a_b)
    {
        $this->a_b = $a_b;
    }
}

?>
