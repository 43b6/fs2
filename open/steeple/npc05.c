inherit NPC;
#include <ansi.h>
void create()
{
        set_name("��צ����", ({ "npc05" }) );
        set("long",
                "����һֻ��������ɽ����צ�����������ϵ���Ƭ��������ҫ�۵Ĺ�â��\n");

        set("race", "Ұ��");
        set("age", 600);
        set("attitude", "friendly");

        set("max_gin", 4000);
        set("max_kee", 6000);
        set("max_sen", 3000);

        set("str", 80);
        set("cor", 50);
        set("spi", 70);
        set("int", 40);

        set("limbs", ({ "ͷ��", "����", "ǰצ", "��צ", "β��" }) );
        set("verbs", ({ "bite", "claw" }) );

        set_temp("apply/attack", 100);
        set_temp("apply/damage", 130);
        set_temp("apply/armor", 60);

        set("combat_exp", 1000000);
        setup();
        carry_object("/u/u/unfinished/ss.c");
}

int heal_up()
{
        if (!is_fighting() ) {
             message_vision (HIW"ϵͳ��ս��ֹͣ��$N�����У���\n"NOR, this_object ());
             destruct(this_object());
             return 1;
        }
        return ::heal_up() + 1;
}
void unconcious ()
{
 object me=query_temp("last_damage_from");
if(!present("fight_card",me))
{
tell_object(me,"\n\nϵͳ��������ûЯ����Ƭ�������޷���¼ս����\n");
destruct (this_object ());
}
else
if(!me->query("quest/start_game"))
{
tell_object(me,"\n\nϵͳ��������û����ʽ�Ǽǣ������޷����䡣\n");
destruct (this_object ());
}
else
if(me->query("quest/start_game")< 6)
       {
        tell_object(users(),HIY"
��ϲ"HIW+me->query("name")+HIY"��ս"HIG"��"HIR"�������������"HIG"��"HIY"ͨ������

"HIW"ϣ��"+me->query("name")+"�ܲ����������´�"HIG"��"HIY"��������������"HIG"��"HIW"��
	"NOR);
	me->set("quest/start_game",6);
        destruct (this_object ());
       }
{
        :: unconcious();
	tell_object(me,HIW"ϵͳ�����Ѿ�ͨ�����ԣ�ϵͳ�����κθ��ġ�\n"NOR);
	destruct(this_object());
}
}