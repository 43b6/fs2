#include <ansi.h>

inherit NPC;
void create()
{
        set_name("�������",({ "meet foot","meet","foot" }) );
        set("gender", "����" );
        set("age", 41);
        set("str", 25);

	setup();
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
if(me->query("quest/start_game")< 2)
       {
        tell_object(me,HIY"
��ϲ"HIW+me->query("name")+HIY"��ս"HIG"��"HIR"��һ����������"HIG"��"HIY"ͨ������

"HIW"ϣ��"+me->query("name")+"�ܲ����������´�"HIG"��"HIY"�ڶ�����������"HIG"��"HIW"��
	"NOR);
	me->set("quest/start_game",2);
        destruct (this_object ());
       }
{
        :: unconcious();
	tell_object(me,HIW"ϵͳ�����Ѿ�ͨ�����ԣ�ϵͳ�����κθ��ġ�\n"NOR);
	destruct(this_object());
}
}