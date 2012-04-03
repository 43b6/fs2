// gmagic.c
//by airke

inherit SKILL;

string type() { return "knowledge"; }

int valid_enable(string usage) { return usage=="magic"; }

string conjure_magic_file(string func)
{
  return CLASS_D("taoist") + "/gmagic/" + func;
}

int conjure_magic (object me, string magic, object target)
{
  

  if ((string)me->query_skill_mapped ("force") != "gforce")
    {
      tell_object (me, "����ڹ��ķ����ԣ�ʹ�������Ŷݼס�\n");
      return 1;
    }

	if( file_size(conjure_magic_file(magic)+".c") > 0 )
  return conjure_magic_file (magic)->conjure(me,target);
	return notify_fail("û������������\n");
}
void skill_improved(object me)
{

}
