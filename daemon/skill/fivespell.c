// fivespell.c
//by airke
inherit SKILL;

string type() { return "knowledge"; }

int valid_enable(string usage) { return usage=="spells"; }

string cast_spells_file(string func)
{
        return CLASS_D("taoist") + "/fivespell/" + func;
}

int cast_spells(object me,string spell,object target)
{ 
        if( file_size( spell = cast_spells_file(spell)+".c" ) > 0 )
                return spell->cast(me,target);
        return notify_fail("û������������\n");
}

void skill_improved(object me)
{
        if(me->query("fivespell",1)%10==1 && me->query("spi") < 35)
                me->add("spi",1);
  
}
