#include <ansi.h>
inherit SSERVER;
inherit F_FUNCTION;
void create() { seteuid(getuid()); }
int again(object me);
int perform( object me, object target )
{
	object weapon, mob, *enemy;
              int i;
              enemy=me->query_enemy();
              i=sizeof(enemy);
/*
	if( me->query_skill( "fast-blade", 1 ) < 90 )
	return notify_fail( "������ǧҶ������������, û�취ʹ����Ӱ��ն��\n" );
	if( me->query_skill_mapped("blade") != "fast-blade" )
	return notify_fail( "ֻ����ʹ���ǧҶ����ʱ����ʹ����Ӱ��ն��\n" );
	if( me->query("family/family_name") != "����" )
	return notify_fail( "ֻ�н���ͽ����ࡡ�\n" );
	if( !(weapon = me->query_temp("weapon"))||weapon->query("skill_type") != "blade" )
	return notify_fail( "û�е���ʹ������Ӱ��ն�ġ�\n" );
	if( me->query("force") < 300 )
	return notify_fail( "�����������, ʹ������Ӱ��ն��\n" );
*/
 if(userp(me)&&me->query("id")!="swy")
 return notify_fail("ֻ�� npc �� swy ����\n");
	if( !me->is_fighting() )
	return notify_fail( "��������Ӱ��ն��˭?\n" );
	if( me->query_temp("fast-dest")==1 )
	return notify_fail( "������ʹ�á�\n" );
	message_vision( HIW"ֻ��$N���еĵ�Խ��Խ��, �����ŵ������ټӿ�,\n"
		           "��ӰҲ�������U��, $N���Ե������޷������$N��λ��,\n" 
                           "$N��Ȼ���һ��,"HIY"���������������������\n"
                        HIW"���ſ�ʼ������ʽ�����������ˡ�\n" NOR, me );
        me->add( "force", -300 );
        while(i--) {
        if(enemy[i])
        enemy[i]->start_busy(1);
        }
	me->set_temp( "fast-dest", 1 );
	me->start_busy(1);
    call_out("again", 2, me); 
	return 1;
}
int again(object me)
{
        object *enemy;
        int i,a,fun,gin,kee,sen;
        if(!me) return 1;
        enemy=me->query_enemy();
        i=sizeof(enemy);
        fun=me->query("functions/power-dest/level");
        a=(int)(fun/10)+3;
        if(!me->query_temp("a")) {
        me->set_temp("a",a+1); }
        if(me->query_temp("fast-times")==me->query_temp("a")) {
        tell_object(me,sprintf(HIC"��Ĵ��������ʩչ���ˡ�\n"NOR));
        me->delete_temp("fast-dest");
        me->delete_temp("a");
        me->delete_temp("fast-times");
        if(fun<100) function_improved("power-dest",random(500));
        return 1; }
        while(i--) {
        if(!me||!enemy[i]) continue;
message_vision(sprintf(HIR"
ͻȻ$N��¶�������ŭ�𣬿�����Ԫ����ʹ��ħ��ʧ��֮����"HIW"��¬ɽ����һ���ۡ�"NOR),me,enemy[i]);
message_vision(sprintf(HIB"
$N���ŵ��У�˳���ļ�����ת����$n���������ꡯ����ҹ������硯����ѩ��\n"HIY"$n����ɿ�Ե�������ס��һ˲��$n��������������ǵ��ĵ��˺�\n\n"NOR),me,enemy[i]);
        kee = enemy[i]->query("max_kee")/35;
      if(kee<250) kee=250;
        if(kee > 500) kee=500;
        enemy[i]->receive_wound("kee",kee,me);
message_vision(HIW
"$NͻȻ������ʽ��һ���ѡ�����ŭն�����е���߾��硣\n"NOR,me,enemy[i]);
message_vision(HIW
"$N�۾�����������������İ��塮"HIR"����ŭն����"HIW"��
$N�����ۿ����ͷţ�˲ʱһ���������豼��$n��\n"NOR,me,enemy[i]);
message_vision(HIW
"$N�۾�����������������İ��塮"HIG"����ŭն����"HIW"��
$N�����������ͷţ�˲ʱ�������ƿշ�ն��$n��\n"NOR,me,enemy[i]);
message_vision(HIW
"$N�۾�����������������İ��塮"HIY"����ŭն��ŭ"HIW"��
$N������ŭ���ͷţ�˲ʱŭ�����Թ������$n��\n"NOR,me,enemy[i]);
message_vision(HIW
"$N�۾�����������������İ��塮"HIB"����ŭն��ն"HIW"��
$N�����ۼ����ͷţ�˲ʱ�����γɵ�������$n��\n"NOR,me,enemy[i]);
message_vision(HIW
"$N�۾��������������������߰��塮"HIC"������ŭ��ն"HIW"��
$N��������ͬʱ�ͷţ�˲ʱһ��ǿ�Ƶĵ�������ն$n��\n"NOR,me,enemy[i]);
        message_vision(HIR"$n���㲻������$N�Ĵ����������ʽ��һ���˶������˿ڣ�Ѫ����ע��\n" NOR, me, enemy[i]);
        kee = enemy[i]->query("max_kee")/35;
      if(kee<250) kee=250;
        if(kee > 500) kee=500;
        enemy[i]->receive_wound("kee",kee,me);
        enemy[i]->start_busy(1);
        COMBAT_D->report_status(enemy[i],1);
        }
        me->add_temp("fast-times",1);
      me->start_busy(1);
        call_out("again", 2, me);
        return 1;
}
