// groups.c
//
// ����һ�μ�ͬһ���Ÿ��ض���һ����
// by wade 7/10/1996
//
inherit F_CLEAN_UP;

int help(object me);

int main(object me, string arg)
{
  string sw, index, cont, *group;
  mapping groups;

  groups = me->query("groups");
  if (!arg)
    printf ("���趨��Ⱥ����: %O\n", me->query("groups"));
  else if (arg[0..0] == "-") {
    if (sscanf (arg, "%s %s", sw, arg) != 2)
      return help(me);
    if (sw == "-a") {
      if (sscanf (arg, "%s %s", index, cont) != 2)
        return help(me);
      if ( !groups || sizeof(groups) == 0 )
	me->set("groups/"+index, ({ cont }) );
      else if (!group=groups[index])
	me->set("groups/"+index, ({ cont }) );
      else if (member_array(cont, group) == -1) {
	group += ({ cont });
	me->set("groups/"+index, group);
      }
      write ("���Ӻ���.\n");
    }
    else if (sw == "-d") {
      if (!groups)
        write ("�����û��� groups!\n");
      else if (sscanf (arg, "%s %s", index, cont) != 2)
        me->delete("groups/"+index);
      else {
	group = groups[index];
	if (member_array(cont, group) != -1) {
	  group -= ({ cont });
	  me->set("groups/"+index, group);
	}
      }
      group = me->query("groups/"+index);
      if (group && group == ({}) )
        me->delete("groups/"+index);
      groups = me->query("groups");
      if (groups && sizeof(groups) == 0 )
        me->delete("groups");
      write ("ɾ�����.\n");
    }
    printf ("�µ�Ⱥ����: %O\n", me->query("groups/"+index));
  }
  else
    printf ("���Ⱥ���趨��: %O\n", me->query("groups/"+arg));
  return 1;
}

int help(object me)
{
  write(@HELP
ָ���ʽ : groups [-a|-d group [who]]
           groups                        <-- �����е��趨
           groups -a <group> <who>       <-- �� who ���� group ���Ⱥ��
           groups -d <group>             <-- �� group ���Ⱥ�鿳��
           groups -d <group> <who>       <-- �� who �� group ���Ⱥ���õ�
ָ��˵�� :
           ������ĿǰֻΪ��һ�μ��Ÿ��ܶ��˵�ʱ���á�
ʹ�÷��� :
           groups
           groups -a test wade
           groups -a test chun
           groups -d test chun
           groups -d test
HELP);
    return 1;
}
 
