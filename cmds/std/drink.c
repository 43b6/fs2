// ��������������������Լ��ټ��������
// ���⣬�������Ļ������˵�������Լ���ǰ��ˮ����������,
// ϣ�����ָķ�����ٵ����Ŀ���.
// by wade in 1996 5 31

#include <ansi.h>
inherit F_CLEAN_UP;
 
int help (object);

int main (object me,string arg)
{
  object can;
  mapping my;

  seteuid(getuid(me));
 
  if (!arg) return help(me);
  if (!objectp(can=present(arg,me))&&
      !objectp(can=present(arg,environment(me))))
    return help(me);

  my = can->query("Һ��");

  // ������������ͷ�趨���⺯��
  if (can->query("Һ��/���⺯��")) return 1;

  if( !can->query("Һ��/ʣ") ) {
    if (stringp(can->query("Һ��/����")))
      printf ("%s��%s�Ѿ����ȹ��ˡ�\n",can->name(),can->query("Һ��/����"));
    else
      printf ("%s�ǿյġ�\n",can->name());
    return 1;
  }

  if (me->query("water") >= me->max_water_capacity()) {
    write ("���Ѿ���̫���ˣ���Ҳ�಻��һ��ˮ�ˡ�\n");
    return 1;
  }

  can->add("Һ��/ʣ",-1);
  
  // ������������ͷ�趨����ѶϢ by ACKY
  if( !can->query("Һ��/����ѶϢ") )
	message_vision ("$N����Ͷ���" + can->name() + ", ������غ��˼���" + can->query("Һ��/����") + "��\n",me);

  if (!intp(can->query("Һ��/ֹ��")))
    me->add("water",10);
  else
    me->add("water",can->query("Һ��/ֹ��"));

  if ((int)me->query("water") > me->max_water_capacity())
    me->set("water",me->max_water_capacity());
  if (me->is_fighting()) me->start_busy(2);
  if (!can->query ("Һ��/ʣ")) {
    write ("���Ѿ���" + can->name() + "���" + can->query("Һ��/����") +
           "�ȵ�һ��Ҳ��ʣ�ˡ�\n");
    return 1;
  }

  if (can->query("get_poison"))
  {
    write ("���� ! ˮ���ж� !\n");
    me->apply_condition (can->query("get_poison"),can->query("poison_power"));
  }

  switch(can->query("Һ��/����")) {
    case "��":
      me->apply_condition("drunk",
        (int)me->query_condition("drunk")
        + can->query("Һ��/�ƾ��ɷ�"));
      break;
  }

  return 1;
}
 
int help(object me)
{
	write(@HELP
ָ���ʽ : drink <��������>
 
ʹ��˵�� :
	�����������������Һ�����ˮ���ȾƵȵȡ�
	��Ȼ������Ҫ����Һ���ԺȲ��У�Ʃ��ˮ�׻��߾ƴ��ȵȡ�
	����Һ��֮�����ֹ�ʣ�����Ҳ�п��ܺȵ���ҩ��������
	����ҩҲ���޿��ܡ����⣬�ȾƲ��ܺ�̫�࣬������ร�
HELP
    );
    return 1;
}
