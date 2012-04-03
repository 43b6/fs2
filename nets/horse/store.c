#include <ansi.h>
#include <mudlib.h>
inherit ROOM;
int do_list();
int do_trade(string);
void create() {
set("short",CYN"��ƥ��ɢ����"NOR);
set("long",@LONG

������ȫ��������ƥ�������ġ�������������ҵ�������Ҫ����
������������ս��������������ȥ��ֻ��һ���ŵ���ǣ���������
���������ǵ������������֡������ʹ��(list)�鿴��������
��Щ����

LONG);
        set("exits",([ /* sizeof() == 1 */
            "west" : "/open/port/room/r2-2",
      ]));
        set("light_up", 1);
        set("no_kill", 1);
        set("no_fight", 1);
        set("no_magic", 1);
        setup();
}

void init() {
        add_action("do_list","list");
        add_action("do_trade","trade");
}

int do_list() {
        return notify_fail("

            С������������ƥ����:

       �������� (urain horse)       exp :  900000        :  100 ��
       ��ҹ���� (Dark horse)        exp :  700000        :   90 ��
       ������   (Red horse)         exp :  550000        :   80 ��
       �ںھ�   (Black horse)       exp :  450000        :   70 ��
       ������   (Dragon horse)      exp :  350000        :   60 ��
       ����   (Jeelin horse)      exp :  250000        :   50 ��
       �P�B��   (Tau horse)         exp :  150000        :   40 ��
       ��w\��   (Twosee horse)      exp :   80000        :   30 ��
       �����   (Whaliu horse)      exp :   30000        :   20 ��
       ��L��   (Sueswan horse)     exp :       0        :   10 ��

           ��ֻ���� trade <����> ���ɲɹ���лл���Ĺ��٣�\n\n");
}

int do_trade(string str) {
        int gold,silver,exp,i,money;
        object me,horse;
        me = this_player();
        if(me->query_temp("have_horse"))
 return notify_fail(HIY"���ϰ�˵����һ����ֻ����һƥ��ม�\n"NOR);
        switch(str) {
           case "urain horse"    :
                horse = new("/open/gblade/npc/horse/urain");
                break;
           case "dark horse"    :
                horse = new("/open/gblade/npc/horse/dark");
                break;
           case "tyna horse"    :
                horse = new("/open/gblade/npc/horse/tyna");
                break;
           case "red horse"     :
              horse = new("/open/gblade/npc/horse/red");
              break;
           case "black horse"   :
              horse = new("/open/gblade/npc/horse/black");
              break;
           case "dragon horse"  :
              horse = new("/open/gblade/npc/horse/dragon");
              break;
           case "jeelin horse"  :
              horse = new("/open/gblade/npc/horse/jeelin");
              break;
           case "tau horse"     :
              horse = new("/open/gblade/npc/horse/tau");
              break;
           case "twosee horse"  :
              horse = new("/open/gblade/npc/horse/twosee");
              break;
           case "whaliu horse"  :
              horse = new("/open/gblade/npc/horse/whaliu");
              break;
           case "sueswan horse" :
              horse = new("/open/gblade/npc/horse/sueswan");
              break;
default : return notify_fail(HIY
"���ϰ�˵������Ǹ�����겢�������ֶ�����\n"NOR);
        }
        exp = (int)horse->query("exp");
        gold = (int)horse->query("gold");
        silver = (int)horse->query("silver");
        money = gold*10000 + silver*100;
        if(me->query("combat_exp") < exp)
return notify_fail(HIY
"���ϰ�˵����������޷���Ԧ��������ѡһƥ�ɣ�\n"NOR);
        if(!me->pay_money(money))
return notify_fail(HIY
"���ϰ�˵�������Ǯ�������ҵ���ƥ�޷������㣡\n"NOR);
	me = this_player();
        horse->move(environment(me));
        horse->set_leader(me);
        horse->set("family/family_name",me->query("family/family_name"));
        horse->set_temp("my_boss",(string)me->query("id"));
        me->set_temp("horse",(string)horse->query("id"));
        me->set_temp("have_horse", 1);
        message_vision(HIC"$N������һƥ��\n"NOR,me);
return notify_fail(HIY
"���ϰ�˵����лл���Ļݹˣ����´�������\n"NOR);
}

