// mystic.c
//by airke

inherit SKILL;

string type() { return "knowledge"; }

int valid_enable(string usage) { return usage=="magic"; }

string conjure_magic_file(string func)
{
  return CLASS_D("taoist") + "/mystic/" + func;
}

int conjure_magic (object me, string magic, object target)
{
  

  if ((string)me->query_skill_mapped ("force") != "gforce")
    {
      tell_object (me, "你内功心法不对，无法用出道家仙法。\n");
      return 1;
    }

  return conjure_magic_file (magic)->conjure(me,target);
}
void skill_improved(object me)
{

}