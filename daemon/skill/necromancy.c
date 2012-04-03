// necromancy.c
//by airke
inherit SKILL;

string type() { return "knowledge"; }

int valid_enable(string usage) { return usage=="spells"; }

string cast_spells_file(string func)
{
        return CLASS_D("taoist") + "/necromancy/" + func;
}

int cast_spells(object me, string spell, object target)
{ 
	if( file_size( spell = cast_spells_file(spell)+".c" ) > 0 )
                return spell->cast(me, target);
        return notify_fail("û������������\n");
}

int cast_invocation(object me, int number, string str)
{
        return (int)(CLASS_D("taoist")+"/necromancy/invocation") ->cast(me,number,str);
}

