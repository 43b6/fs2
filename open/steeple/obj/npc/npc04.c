#include <ansi.h>

#include "/open/open.h"
inherit NPC;
void create()
{
        set_name("��ϰ��", ({ "trainee" }) );
        set("title", "������");
        set("gender", "����");
        set("long", "����ɱ�ֵ���ϰ����\n");
        set("age",12);
        set("attitude", "heroism");
        set("kee",600);
        set("max_kee",600);
        set("combat_exp",6000);
        setup();
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
if(me->query("quest/start_game")< 5)
       {
        tell_object(me,HIY"
��ϲ"HIW+me->query("name")+HIY"��ս"HIG"��"HIR"���Ĳ���������"HIG"��"HIY"ͨ������

"HIW"ϣ��"+me->query("name")+"�ܲ����������´�"HIG"��"HIY"�������������"HIG"��"HIW"��
	"NOR);
	me->set("quest/start_game",5);
        destruct (this_object ());
       }
{
        :: unconcious();
	tell_object(me,HIW"ϵͳ�����Ѿ�ͨ�����ԣ�ϵͳ�����κθ��ġ�\n"NOR);
	destruct(this_object());
}
}