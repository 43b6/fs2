// preach.c by Onion
// ����QC������by chan
// By Swy ������� QC 98/6/21
inherit SSERVER;
int perform(object me, object target)
{
	string *ATTACK_MSG=({
	"$N���������ı�ɫ��ʼ��$nѵʾ�����ϼ�ѵ�������塣",
	"$N��ʼ���ϲ�����$n���⡸���־����Ĵ��⡣",
	"$N��������Я���ġ����, ��$n�������ӵ�־��",
	"$N������ĵ�Ȱ��$nҪ��־����, ������, �ɴ�ҵ��",
	"$N�ӱ����ͳ����Ӷ�$n����˵: ������Ҫ���ԡ���ʱ����ʹ���Ĵ���ม�",
	"$N��ʼ��$n���С��ټ��ա�����ǧ���ġ���һ�顣"
	});
	int action=random(sizeof(ATTACK_MSG));
	if( target == me )
	  return notify_fail("���ܶԸ��Լ�ѽ!!\n");
	if( !target )
	if( !target = offensive_target(me) )
		return notify_fail("û���������\n");
	if( target->query_temp("preach") )
	  return notify_fail("����û���ˡ�\n");
if( me->query("water") < 20)
	  return notify_fail("���'��ˮ'׼������ม�\n");
	if( me->query("force") <= 0 )
	  return notify_fail("�������������\n");
	if( !me->query_skill("literate") )
          return notify_fail("��ѧ�������ѧʶ��\n");
        if( !me->is_fighting() )
	  return notify_fail("ս����ѵʾ�Է��Ƚ���Чม�\n");
        message_vision("\n[36m"+ATTACK_MSG[action]+"[0m\n\n",me,target);
	target->set_temp("preach",1);
     if(target->is_busy())
       return notify_fail("���˲��ܶ��칥��Ŷ!!!\n");
	target->start_call_out( (: call_other, __FILE__, "do_result",me,target :),3);
	return 1;
}
void do_result(object me,object target)
{
	if( target->query("race") != "����" )
	  message_vision("$N����һ˫���۾����������$n��\n",target,me);
	else
	  if( random(3) > 0 )
          {
	    message_vision("[1;36m$N˫�ֱ���ͷ���: ��~~....��Ȼ�ܲ���$n��ħ����\n[0m",target,me);
     target->start_busy(2);
	  }
	  else
	    message_vision("$N˿������Ӱ��..\n",target);
    me->start_busy(1);
}
