// �鵶 by swy
// ����һЩbug���������ڹ�����action�У�������ץ�����Է�
// ���õ�ʧȥ������������������һ�£��������������Σ����
// �ٳ����۲���������Ϊ��ʧȥ������npcҲ�����ʧȥ��������
// �������صģ�������������������ע�ڴˡ� by Neverend 2001/10/14
#include <weapon.h>
#include <ansi.h>
#include <combat.h>
inherit F_FUNCTION;
inherit SSERVER;
inherit BLADE;
object ob=this_object();
object me=this_player();
object wname;
object wna;
int mkfun;
void create()
{
        set_name("���鵶",({"mk-blade"}));
        set_weight(100);
        if( clonep() )
        set_default_object(__FILE__);
        else 
        {
        set("unit","��");
        set("long","һ�����ھ���а�����������Ƴɵĵ���\n");
        set("value", 0 );
        set("material","crimsonsteel");
        set("wield_msg","$N���������ھ�һ�ţ���ʱ����ۼ������ж���һ�ѵ���͸����$n��\n");
        set("unwield_msg","$N�ھ�һ�գ���ʱ�����ɢ�����е�$nҲ��ʧ���١�\n");
        set("no_sell",1);
        set("no_give",1);
	set("no_save",1);
        set("no_get",1);
        set("no_put",1);
        set("no_auc",1);
        }
        init_blade(1,SECONDARY);
        setup();
}       
void init()
{
object wa=present("mk-blade",me);
if( wa ) {
// ��һ�� �ӵ���
add_action("do_blade","addblade");
// �ڶ��� �˺���
add_action("do_hurt","hurtkee");
// ������ busy��
add_action("do_busy","busy");
// ���Ĳ� heal��
add_action("do_heal","healup");
// ����� enfo��
add_action("do_enforce","enfup");
// ������ ������
add_action("do_power","powerup");
// ���߲� ������
add_action("do_basic","addbasic");
// �ڰ˲� �˼���
add_action("do_lose","losehurt");
// �ھŲ� ������
add_action("do_bad","badup");
// ��ʮ�� ��ɱ��
add_action("do_die","dieup");
}
}

int do_blade()
{
        int fun = me->query("functions/addblade/level");
        wname=me->query_temp("secondary_weapon");
        wna=me->query_temp("weapon");
        if( ob->query("equipped") != "wielded" )
        return notify_fail("�������װ���ϡ�\n");
        if( wna->query("id") == "mk-blade" )
        return notify_fail("�˵�Ҫװ���ڸ��������й�Ч��\n");
        if( me->query("force") < 600 )
        return notify_fail("�������������\n");
        if( me->query("bellicosity") < 6 )
        return notify_fail("���ɱ��������\n");
        if( me->query("potential") - me->query("learned_points") < 11 )
        return notify_fail("���Ǳ�ܲ������õ���\n");
        if( me->is_fighting() )
        return notify_fail("ս���в���ʹ�á�\n");
        if( me->query_temp("addblade") == 1 )
        return notify_fail("��֮Ѫ���������������ߡ�\n");
message_vision(HIY"$N����"+wname->name()+HIY"��ͻȻһ������������������ڡ�\n"NOR,me);
message_vision(HIY"$N���ĵ��������˲��١�\n"NOR,me);
        me->add_temp("apply/blade",fun+20);
        me->set_temp("addblade",1);
        me->add("force",-500);
        me->add("bellicosity",-5);
        me->add("potential",-10);
        call_out("delblade",fun+10,me);
        return 1;
}

int delblade()
{
        int fun = me->query("functions/addblade/level");
        if(me) {
        me->delete_temp("addblade");
        me->add_temp("apply/blade",-(fun+20));
        message_vision(HIW"$N���ĵ���Ѫ����ʧ�ˡ�\n"NOR,me);
        if(fun<100) { function_improved("addblade",random(700)); }
        }
        return 1;
}

int do_hurt()
{
        object *enemy;
        int i,j,fun;
        fun = me->query("functions/hurtkee/level");
        mkfun = me->query("functions/mk-blade/level");
        wname=me->query_temp("secondary_weapon");
        wna=me->query_temp("weapon");
        if( ob->query("equipped") != "wielded" )
        return notify_fail("�������װ���ϡ�\n");
        if( mkfun <= 10 )
        return notify_fail("���а���Ƶ�����û����ʹ���⹦Ч�ĵȼ���\n");
        if( wna->query("id") == "mk-blade" )
        return notify_fail("�˵�Ҫװ���ڸ��������й�Ч��\n");
        if( me->query("force") < 600 )
        return notify_fail("�������������\n");
        if( me->query("bellicosity") < 6 )
        return notify_fail("���ɱ��������\n");
        if( me->query("potential") - me->query("learned_points") < 11 )
        return notify_fail("���Ǳ�ܲ������õ���\n");
        if( !me->is_fighting() )
        return notify_fail("Ҫս���в���ʹ�á�\n");
        enemy=me->query_enemy();
        i=sizeof(enemy);
        if(!enemy)
        return notify_fail("û�е��˿���ɱ��\n");
        if( me->query_temp("hurtkee") == 1 )
        return notify_fail("��ĵ���û����Ѫ�����ٵ�һ�°ɡ�\n");
message_vision(HIR"����$N�ֳ�"+wname->name()+HIR"����ɱ��ʱ�����е���ͻȻ�ز�����\n"NOR,me);
        for(j=0;j<i;j++) {
        if(!enemy[j]) continue;
        if( (fun*2)+20 > random(250) ) {
message_vision(HIR"�˵����㼯Ѫ���γ�Ѫ������$N���Ͽ��ȶ�ȥ��\n"NOR,enemy[j]);
        enemy[j]->add("kee",-((fun*12)+350));
        enemy[j]->apply_condition("bleeding",15);
        COMBAT_D->report_status(enemy[j]);
        } else message_vision(HIW"ֻ��$N����һ�������յ�����Ѫ����\n"NOR,enemy[j]);
        }
        me->set_temp("hurtkee",1);
        me->add("force",-500);
        me->add("bellicosity",-5);
        me->add("potential",-10);
        call_out("delhurt",7,me);
        return 1;
}

int delhurt()
{
        int fun = me->query("functions/hurtkee/level");
        if(me) {
        me->delete_temp("hurtkee");
        if(fun<100) { function_improved("hurtkee",random(700)); }
        }
        return 1;
}

int do_busy()
{
        object *enemy;
        int i,j,fun,k;
        fun = me->query("functions/busy/level");
        mkfun = me->query("functions/mk-blade/level");

	if( fun <= 35 )
		k = 1;
	else if( fun >= 36 && fun <= 70 )
		k = 2;
	else if( fun >= 71 )
		k = 3;

        wname=me->query_temp("secondary_weapon");
        wna=me->query_temp("weapon");
        if( ob->query("equipped") != "wielded" )
        return notify_fail("�������װ���ϡ�\n");
        if( mkfun <= 20 )
        return notify_fail("���а���Ƶ�����û����ʹ���⹦Ч�ĵȼ���\n");
        if( wna->query("id") == "mk-blade" )
        return notify_fail("�˵�Ҫװ���ڸ��������й�Ч��\n");
        if( me->query("force") < 600 )
        return notify_fail("�������������\n");
        if( me->query("bellicosity") < 6 )
        return notify_fail("���ɱ��������\n");
        if( me->query("potential") - me->query("learned_points") < 11 )
        return notify_fail("���Ǳ�ܲ������õ���\n");
        if( !me->is_fighting() )
        return notify_fail("Ҫս���в���ʹ�á�\n");
        enemy=me->query_enemy();
        i=sizeof(enemy);
        if(!enemy)
        return notify_fail("û�е��˿���ɱ��\n");
      if( me->query_temp("addbusy") == 1 )
        return notify_fail("��ĵ���û����Ѫ�����ٵ�һ�°ɡ�\n");
message_vision(HIR"����$N�ֳ�"+wname->name()+HIR"����ɱ��ʱ�����е���ͻȻ�ز�����\n"NOR,me);
        for(j=0;j<i;j++) {
        if(!enemy[j]) continue;
        if( (fun*2)+20 > random(250) ) {
        if( !enemy[j]->is_busy() ) {
message_vision(HIR"�˵������յ���Ѫ���γ�Ѫ���������$N���ж���\n"NOR,enemy[j]);
        enemy[j]->start_busy(k);
        COMBAT_D->report_status(enemy[j]);
        } else message_vision(HIW"ֻ��$Nŭ��һ�������ֵ���Ѫ����ʱ���ٻ�������\n"NOR,enemy[j]);
        } else message_vision(HIW"ֻ��$Nŭ��һ�������ֵ���Ѫ����ʱ���ٻ�������\n"NOR,enemy[j]);
        }
        me->set_temp("addbusy",1);
        me->add("force",-500);
        me->add("bellicosity",-5);
        me->add("potential",-10);
        call_out("delbusy",7,me);
        return 1;
}

int delbusy()
{
        int fun = me->query("functions/busy/level");
        if(me) {
        me->delete_temp("addbusy");
        if(fun<100) { function_improved("busy",random(700)); }
        }
        return 1;
}

int do_heal()
{
	int fun, n;

        fun = me->query("functions/healup/level");
        mkfun = me->query("functions/mk-blade/level");
        wname=me->query_temp("secondary_weapon");
        wna=me->query_temp("weapon");
        if( ob->query("equipped") != "wielded" )
        return notify_fail("�������װ���ϡ�\n");
        if( mkfun <= 30 )
        return notify_fail("���а���Ƶ�����û����ʹ���⹦Ч�ĵȼ���\n");
        if( wna->query("id") == "mk-blade" )
        return notify_fail("�˵�Ҫװ���ڸ��������й�Ч��\n");
        if( me->query("force") < 600 )
        return notify_fail("�������������\n");
        if( me->query("bellicosity") < 6 )
        return notify_fail("���ɱ��������\n");
        if( me->query("potential") - me->query("learned_points") < 11 )
        return notify_fail("���Ǳ�ܲ������õ���\n");
        if( me->is_fighting() )
        return notify_fail("ս���в���ʹ�á�\n");
        if( me->query_temp("heal") == 1 )
        return notify_fail("��ĵ���û����Ѫ�����ٵ�һ�°ɡ�\n");
message_vision(HIR"$N��Ȼ��ȡ����"+wname->name()+HIR"��Ѫ�����˾����쳣���ˡ�\n"NOR,me);
message_vision(HIR"$N������Ѫ�������Ļ����泩�ޱȣ���ǻ�����������\n"NOR,me);
	n = fun*15 + 200;
	me->receive_curing( "gin", n );
        me->receive_heal( "gin", n );
        me->receive_curing("kee",n );
        me->receive_heal("kee",n);
        me->receive_curing("sen",n);
        me->receive_heal("sen",n);
        if( fun >= 95) { 
if(me->query_condition("bleeding")) { me->clear_condition("bleeding"); }
if(me->query_condition("burn")) { me->clear_condition("burn"); }
if(me->query_condition("blade")) { me->clear_condition("blade"); }
if(me->query_condition("u-stial")) { me->clear_condition("u-stial"); }
if(me->query_condition("cold")) { me->clear_condition("cold"); }
if(me->query_condition("hart")) { me->clear_condition("hart"); }
if(me->query_condition("star-stial")) { me->clear_condition("star-stial"); }
if(me->query_condition("blockade")) { me->clear_condition("blockade"); }
if(me->query_condition("skyfire")) { me->clear_condition("skyfire"); }
if(me->query_condition("tsunami")) { me->clear_condition("tsunami"); }
        }
        me->set_temp("heal",1);
        me->add("force",-500);
        me->add("bellicosity",-5);
        me->add("potential",-10);
        call_out("delheal",7,me);
        return 1;
}
int delheal()
{
        int fun = me->query("functions/healup/level");
        if(me) {
        me->delete_temp("heal");
        if(fun<100) { function_improved("healup",random(700)); }
        }
        return 1;
}

int do_enforce()
{
        int fun,k;
        fun = me->query("functions/enforceup/level");
        mkfun = me->query("functions/mk-blade/level");
        k = fun/10 + 1;
        if( k > 10 )
        	k = 10;
        wname=me->query_temp("secondary_weapon");
        wna=me->query_temp("weapon");
        if( ob->query("equipped") != "wielded" )
        return notify_fail("�������װ���ϡ�\n");
        if( mkfun <= 40 )
        return notify_fail("���а���Ƶ�����û����ʹ���⹦Ч�ĵȼ���\n");
        if( wna->query("id") == "mk-blade" )
        return notify_fail("�˵�Ҫװ���ڸ��������й�Ч��\n");
        if( me->query("force") < 600 )
        return notify_fail("�������������\n");
        if( me->query("bellicosity") < 6 )
        return notify_fail("���ɱ��������\n");
        if( me->query("potential") - me->query("learned_points") < 11 )
        return notify_fail("���Ǳ�ܲ������õ���\n");
        if( me->is_fighting() )
        return notify_fail("ս���в���ʹ�á�\n");
        if( me->query_temp("addenforce") == 1 )
        return notify_fail("��֮Ѫ���������������ߡ�\n");
message_vision(HIG"$N��Ȼ��ȡ����"+wname->name()+HIG"��Ѫ�����˾����쳣���ˡ�\n"NOR,me);
message_vision(HIG"$N������Ѫ�������������ڹ���Ѫ������Ѫ������������������\n"NOR,me);
        me->set_temp("oldenforce",me->query("force_factor"));
        me->set_temp("addenforce",1);
        me->set("force_factor",10+k);
        me->add("force",-500);
        me->add("bellicosity",-5);
        me->add("potential",-10);
        call_out("delenforce",fun+10,me);
        return 1;
}

int delenforce()
{
        int fun = me->query("functions/enforceup/level");
        if(me) {
        me->delete_temp("addenforce");
        me->set("force_factor",me->query_temp("oldenforce"));
        me->delete_temp("oldenforce");
        message_vision(HIW"$N���ĵ���Ѫ����ʧ�ˡ�\n"NOR,me);
        if(fun<100) { function_improved("enforceup",random(700)); }
        }
        return 1;
}

int do_power()
{
      int k;
        int fun = me->query("functions/powerup/level");
        mkfun = me->query("functions/mk-blade/level");
        wname=me->query_temp("secondary_weapon");
        wna=me->query_temp("weapon");
      k=(int)(fun/10);
        if( k < 1 ) k=1;
        if( ob->query("equipped") != "wielded" )
        return notify_fail("�������װ���ϡ�\n");
        if( mkfun <= 50 )
        return notify_fail("���а���Ƶ�����û����ʹ���⹦Ч�ĵȼ���\n");
        if( wna->query("id") == "mk-blade" )
        return notify_fail("�˵�Ҫװ���ڸ��������й�Ч��\n");
        if( me->query("force") < 600 )
        return notify_fail("�������������\n");
        if( me->query("bellicosity") < 6 )
        return notify_fail("���ɱ��������\n");
        if( me->query("potential") - me->query("learned_points") < 11 )
        return notify_fail("���Ǳ�ܲ������õ���\n");
        if( me->is_fighting() )
        return notify_fail("ս���в���ʹ�á�\n");
        if( me->query_temp("addbasic") == 1 && me->query("id")!="swy" )
        return notify_fail("���Ѿ�ʹ����ǿ���ˡ�\n");
        if( me->query_temp("powerup") == 1 )
        return notify_fail("��֮Ѫ���������������ߡ�\n");
        message_vision(HIG"$N��������"+wname->name()+HIG"��Ѫ�����˾����쳣���ˡ�\n"NOR,me);
        message_vision(HIG"$N������Ѫ�����۾����죬�����˿�������\n"NOR,me);
        ob->set("nodrop",1);
        me->apply_condition("mkpowerup",k);
        me->add_temp("apply/dodge",-20);
        me->add_temp("apply/move",-20);
        me->add_temp("apply/parry",-20);
        me->add_temp("apply/attack",((fun*2)+30));
        me->set_temp("powerup",1);
        me->add("force",-500);
        me->add("bellicosity",-5);
        me->add("potential",-10);
        return 1;
}

int do_basic()
{
        int fun,k,g;
        fun = me->query("functions/addbasic/level");
        mkfun = me->query("functions/mk-blade/level");
        k=(int)(fun/5);
        if( k < 1 ) k=1;
        g=(int)(fun/10);
        if( g < 1 ) g=1;
        wname=me->query_temp("secondary_weapon");
        wna=me->query_temp("weapon");
        if( ob->query("equipped") != "wielded" )
        return notify_fail("�������װ���ϡ�\n");
        if( mkfun <= 60 )
        return notify_fail("���а���Ƶ�����û����ʹ���⹦Ч�ĵȼ���\n");
        if( wna->query("id") == "mk-blade" )
        return notify_fail("�˵�Ҫװ���ڸ��������й�Ч��\n");
        if( me->query("force") < 600 )
        return notify_fail("�������������\n");
        if( me->query("bellicosity") < 6 )
        return notify_fail("���ɱ��������\n");
        if( me->query("potential") - me->query("learned_points") < 11 )
        return notify_fail("���Ǳ�ܲ������õ���\n");
        if( me->is_fighting() )
        return notify_fail("ս���в���ʹ�á�\n");
        if( me->query_temp("powerup") == 1 && me->query("id")!="swy" )
        return notify_fail("���Ѿ�ʹ�ÿ����ˡ�\n");
        if( me->query_temp("addbasic") == 1 )
        return notify_fail("��֮Ѫ���������������ߡ�\n");
      if( me->query("setgift-mk")==1 )
      return notify_fail("�����ϻ����ŵ�֮Ѫ����\n");
        message_vision(HIG"$N��������"+wname->name()+HIG"��Ѫ�����˾����쳣���ˡ�\n"NOR,me);
        message_vision(HIG"$N������Ѫ����Ѫ������ȫ��ʹ��$N���һ���졣\n"NOR,me);
me->set("setgift-mk",1);
me->set("setgift/str",me->query("str"));
me->set("setgift/cps",me->query("cps"));
me->set("setgift/cor",me->query("cor"));
me->set("setgift/int",me->query("int"));
me->set("setgift/spi",me->query("spi"));
me->set("setgift/kar",me->query("kar"));
        ob->set("nodrop",1);
        me->add("str",k);
        me->add("cps",k);
        me->add("cor",k);
        me->add("int",k);
        me->add("spi",k);
        me->add("kar",k);
        me->apply_condition("giftout",g);
        me->set_temp("addbasic",1);
        me->add("force",-500);
        me->add("bellicosity",-5);
        me->add("potential",-10);
        return 1;
}

int do_lose()
{
        int fun;
        fun = me->query("functions/losehurt/level");
        mkfun = me->query("functions/mk-blade/level");
        wname=me->query_temp("secondary_weapon");
        wna=me->query_temp("weapon");
        if( ob->query("equipped") != "wielded" )
        return notify_fail("�������װ���ϡ�\n");
        if( mkfun <= 70 )
        return notify_fail("���а���Ƶ�����û����ʹ���⹦Ч�ĵȼ���\n");
        if( wna->query("id") == "mk-blade" )
        return notify_fail("�˵�Ҫװ���ڸ��������й�Ч��\n");
        if( me->query("force") < 600 )
        return notify_fail("�������������\n");
        if( me->query("bellicosity") < 6 )
        return notify_fail("���ɱ��������\n");
        if( me->query("potential") - me->query("learned_points") < 11 )
        return notify_fail("���Ǳ�ܲ������õ���\n");
        if( me->is_fighting() )
        return notify_fail("ս���в���ʹ�á�\n");
        if( me->query_temp("losehurt") == 1 )
        return notify_fail("��֮Ѫ���������������ߡ�\n");
message_vision(HIG"$N��Ȼ��ȡ����"+wname->name()+HIG"��Ѫ�����˾����쳣���ˡ�\n"NOR,me);
message_vision(HIG"$N������Ѫ�����˹��Ӿ�һ�£���Ѫ������$N�������γ�һ����"HIR"Ѫ������"HIG"����\n"NOR,me);
        me->set_temp("losehurt",1);
        me->apply_condition("bloodcloth",10);
        me->add("force",-500);
        me->add("bellicosity",-5);
        me->add("potential",-10);
        call_out("dellose",fun+10,me);
        return 1;
}

int dellose()
{
        int fun = me->query("functions/losehurt/level");
        if(me) {
        me->apply_condition("bloodcloth",0);
        me->delete_temp("losehurt");
        message_vision(HIW"$N���ĵ���Ѫ����ʧ�ˡ�\n"NOR,me);
        if(fun<100) { function_improved("losehurt",random(700)); }
        }
        return 1;
}

int do_bad()
{
        object target,obt;
        int fun,k;
        fun = me->query("functions/badup/level");
        mkfun = me->query("functions/mk-blade/level");
        wname=me->query_temp("secondary_weapon");
        wna=me->query_temp("weapon");
        if( ob->query("equipped") != "wielded" )
        return notify_fail("�������װ���ϡ�\n");
        if( mkfun <= 80 )
        return notify_fail("���а���Ƶ�����û����ʹ���⹦Ч�ĵȼ���\n");
        if( wna->query("id") == "mk-blade" )
        return notify_fail("�˵�Ҫװ���ڸ��������й�Ч��\n");
        if( !target ) target = offensive_target(me);
        if( !target ) return notify_fail("û�е��˿���ʹ�á�\n");
      if( !me->is_fighting(target) )
        return notify_fail("ֻ����ս����ʹ�á�\n");
        obt=target->query_temp("weapon");
        if( !obt )
        return notify_fail("����û������\n");
        if( me->query("force") < 600 )
        return notify_fail("�������������\n");
        if( me->query("bellicosity") < 6 )
        return notify_fail("���ɱ��������\n");
        if( me->query("potential") - me->query("learned_points") < 11 )
        return notify_fail("���Ǳ�ܲ������õ���\n");
        if( me->query_temp("badup") == 1 )
        return notify_fail("��ĵ���û����Ѫ�����ٵ�һ�°ɡ�\n");
message_vision(HIY"����$N�ֳ�"+wname->name()+HIY"����ɱ��ʱ�����е���ͻȻ�ز�����\n"NOR,me);
message_vision(HIY"ֻ��$N�ı�����$n�ı���������һ�𷢳���_��_���һ����\n"NOR,me,target);
        if( environment(me) == environment(target) ) {
        k=random(fun)+15;
//�������������£������������ڱ���٣�ӵ��sharpֵ8���ϵ�����һ�������ر���ƹ���
//����һ��ԭ����Ƶ����п���weapon���޷���������������Ϊ�޸Ĺ����콣������������
//�����ѵ����޷�����ڴ��ع��£������µ�����д���������mob���ϵ�������Ҳ��sharp
//ֵ������һ���С�������ر��ע�ڴˡ�  by Neverend 2001/10/14
        if( k > 80 && obt->query("sharp") < 8 && (obt->query("material") != "blacksteel" || obt->query("material") != "crimsonsteel") )
        {
        obt->unequip();
message_vision(HIR"ֻ��$N�ĵ�ɢ����Ũ���Ѫ������Ȼ$n��"+obt->query("name")+HIR"�ѱ��ܳɶ��Ρ�\n"NOR,me,target);
        if( !obt->query("bad"))
        {
        obt->set("name", "("HIR"�ܻ�"NOR")"+obt->query("name"));
        obt->set("bad",1);
        }
        obt->set("value",1);
        obt->set("weapon_prop/damage",0);
        obt->move(environment(target));
        target->rest_action();
        } else if( obt->query("sharp") < 8 && (obt->query("material") != "blacksteel" || obt->query("material") != "crimsonsteel") ) {
        obt->unequip();
message_vision(HIR"ֻ��$N�ĵ�ɢ����Ũ���Ѫ������Ȼ$n��"+obt->query("name")+HIR"�ѱ�Ѫ����ʴ��\n"NOR,me,target);
        if( !obt->query("bad"))
        {
        obt->set("name", "("HIR"��"NOR")"+obt->query("name"));
        obt->set("bad",1);
        }
        if( obt->query("weapon_prop/damage") >= 15 )
        {
        obt->add("weapon_prop/damage",-15);
        obt->wield();
        } else {
        obt->set("value",1);
        obt->set("weapon_prop/damage",0);
        obt->move(environment(target));
        target->rest_action();
        }
        } else message_vision(HIW"ֻ��$N��$n�ı����໥��ײð���𻨡�\n"NOR,me,target);
        }
        me->set_temp("badup",1);
        me->add("force",-500);
        me->add("bellicosity",-5);
        me->add("potential",-10);
        call_out("delbadup",7,me);
        return 1;
}

int delbadup()
{
        int fun = me->query("functions/badup/level");
        if(me) {
        me->delete_temp("badup");
        if(fun<100) { function_improved("badup",random(700)); }
        }
        return 1;
}

int do_die()
{
        object target;
        int fun;
        fun = me->query("functions/dieup/level");
        mkfun = me->query("functions/mk-blade/level");
        wname=me->query_temp("secondary_weapon");
        wna=me->query_temp("weapon");
        if( ob->query("equipped") != "wielded" )
        return notify_fail("�������װ���ϡ�\n");
        if( mkfun != 100 )
        return notify_fail("���а���Ƶ�����û����ʹ���⹦Ч�ĵȼ���\n");
        if( wna->query("id") == "mk-blade" )
        return notify_fail("�˵�Ҫװ���ڸ��������й�Ч��\n");
        if( !target ) target = offensive_target(me);
        if( !target ) return notify_fail("û�е��˿���ʹ�á�\n");
      if( !me->is_fighting(target) )
        return notify_fail("ֻ����ս����ʹ�á�\n");
        if( userp(target) )
        return notify_fail("���ܶ�����ʹ�á�\n");
        if( target->query_temp("todie") == 2 )
        return notify_fail("ͬһ����ֻ���ö��Ρ�\n");
        if( target->query_temp("no_die_soon") == 1 )
        return notify_fail("��ı�ɱһ��������Ч��\n");
        if( me->query("force") < 600 )
        return notify_fail("�������������\n");
        if( me->query("bellicosity") < 6 )
        return notify_fail("���ɱ��������\n");
        if( me->query("potential") - me->query("learned_points") < 11 )
        return notify_fail("���Ǳ�ܲ������õ���\n");
        if( me->query_temp("dieup") == 1 )
        return notify_fail("������ʹ�á�\n");
message_vision(HIR"$N��Ȼ��ȡ����"+wname->name()+HIR"��Ѫ�����˾����쳣���ˡ�\n\n"NOR,me);
message_vision(HIG"$N������Ѫ����������Ѫ�����ھ��ܺϣ����ɵ���ƺ�Ҫ��$n����һ����\n\n"NOR,me,target);
        me->set_temp("dieup",1);
        call_out("deldie",7,me,target);
        return 1;
}

int deldie( object me, object target )
{
	int fun = me->query("functions/dieup/level");
	me->delete_temp("dieup");
	if( !me || !target ) return 1;
	if( environment(me) != environment(target) ) return 1;
	if( !me->is_fighting(target) ) return 1;
	message_vision( HIY"\n$NĿ¶�׹��ȵ�: ���ҵġ�"HIB"��ؽħ��"HIY"����\n\n", me );
	message_vision( HIR"ֻ��$N�ۼ��ǳ�ǿ���Ѫ������$nҪ��ֱ����ȥ��\n\n", me, target );

	if( fun+15 > random(380) ) {
		message_vision( HIM"$N��ǿ���Ѫ�����������, ����������\n\n"NOR, target );
		target->set_temp( "last_damage_from", me );
		target->die();
	}
	else {
		message_vision( HIC"$N����������ǿ����, ��ͼ��Ѫ������������ȥ��\n\n", target );
		message_vision( HIB"����Ѫ������$N��������, ���е�$n����, ��ʱ, ��������ʧȥ����֮���Ѫ����\n\n"NOR, target, me );
		target->add_temp( "todie", 1 );
		me->start_busy(2);
		me->add( "kee", -(me->query("kee")*5/6) );
	}

	me->add( "force", -500 );
	me->add( "bellicosity", -5 );
	me->add( "potential", -10 );
	if( fun<100 )
		function_improved( "dieup", random(700) );
        return 1;
}
