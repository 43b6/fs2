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
	if( me->query_skill( "fast-blade", 1 ) < 90 )
	return notify_fail( "������ǧҶ������������, û�취ʹ����Ӱ��ն��\n" );
	if( me->query_skill_mapped("blade") != "fast-blade" )
	return notify_fail( "ֻ����ʹ���ǧҶ����ʱ����ʹ����Ӱ��ն��\n" );
	if( me->query("family/family_name") != "����" )
	return notify_fail( "ֻ�н���ͽ����ࡡ�\n" );
	if( !(weapon = me->query_temp("weapon"))||weapon->query("skill_type") != "blade" )
	return notify_fail( "û�е���ʹ������Ӱ��ն�ġ�\n" );
	if( !me->is_fighting() )
	return notify_fail( "��������Ӱ��ն��˭?\n" );
	if( me->query("force") < 300 )
	return notify_fail( "�����������, ʹ������Ӱ��ն��\n" );
	if( me->query_temp("fast-dest")==1 )
	return notify_fail( "̫����, ����ʹ����Ӱ��ն...\n" );
	message_vision( HIW"ֻ��$N���еĵ�Խ��Խ��, �����ŵ������ټӿ�,\n"
		           "��ӰҲ�������U��, $N���Ե������޷������$N��λ��,\n" 
                           "$N��Ȼ���һ��,"HIY"��������Ӱ��ն������\n"
                        HIW"���ſ�ʼ������Ϣ�ع����������ˡ�\n" NOR, me );
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
        fun=me->query("functions/fast-dest/level");
        a=(int)(fun/10)+3;
        if(!me->query_temp("a")) {
        me->set_temp("a",a+1); }
        if(me->query_temp("fast-times")==me->query_temp("a")) {
        tell_object(me,sprintf(HIC"�����Ӱ��ն��ʧ�ˡ�\n"NOR));
        me->delete_temp("fast-dest");
        me->delete_temp("a");
        me->delete_temp("fast-times");
        if(fun<100) function_improved("fast-dest",random(500));
        return 1; }
        while(i--) {
        if(!me||!enemy[i]) continue;
        message_vision(HIC"$Nʹ�����ǧҶ�����ľ��� --- ��Ӱ��ն��͵͵����$n����һ����\n" NOR, me, enemy[i]);
        if( environment(me) != environment(enemy[i]) )
        tell_object(enemy[i],sprintf(HIC"%sʹ�����ǧҶ�����ľ��� --- ��Ӱ��ն��͵͵�����㿳�˹�����\n" NOR,me->name()));
        if( 80 > random(100) ) {
        message_vision(HIR"$n���㲻������$N����Ӱ��ն����һ�����˿ڣ�Ѫ����ע��\n" NOR, me, enemy[i]);
        if( environment(me) != environment(enemy[i]) )
        tell_object(enemy[i], sprintf(HIR"�����㲻������%s����Ӱ��ն����һ�����˿ڣ�Ѫ����ע��\n"NOR, me->name()));
        if(me->is_fighting(enemy[i])) {
        kee = enemy[i]->query("kee")/35;
        if(kee > 150) kee=150;
        enemy[i]->receive_wound("kee",kee,me);
        sen = enemy[i]->query("sen")/20;
        enemy[i]->receive_damage("sen",sen,me);
        gin = enemy[i]->query("gin")/20;
        enemy[i]->receive_damage("gin",gin,me);
        enemy[i]->start_busy(1);
        COMBAT_D->report_status(enemy[i],1);
        }
        } else {
        message_vision(HIG "$n�����������$N����Ӱ��ն��\n" NOR, me, enemy[i]);
        if( environment(me) != environment(enemy[i]) )
        tell_object(enemy[i], sprintf(HIG "�������������%s����Ӱ��ն��\n" NOR, me->name()));
        }
        }
        me->add_temp("fast-times",1);
        call_out("again", 2, me);
        return 1;
}
