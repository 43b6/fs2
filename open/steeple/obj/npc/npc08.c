#include <ansi.h>
#include </open/open.h>
inherit NPC;
void create()
{
        set_name("�μҵ�ʮһ������",({"trainee"}));
         set("long","����һ����׳�ĺ���, ���ں�ͬ����ϰ�����񽣵Ĺ���\n");
        set("gender","����");
        set("class","scholar");
        set("combat_exp", 40000);
        set("attitude","peaceful");
        set("age",23);
        set("force",300);
        set("max_force",300);
        set_skill("force",30);
        set_skill("unarmed",40);
        set_skill("sunforce",30);
        set_skill("linpo-steps",40);
        set_skill("six-fingers",40);
        map_skill("force","sunforce");
        map_skill("dodge","linpo-steps");
        map_skill("move","linpo-steps");
        map_skill("unarmed","six-fingers");
        map_skill("parry","six-fingers");
        set_temp("apply/dodge",30);
        setup();
        add_money("silver",20);
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
if(me->query("quest/start_game")< 9)
       {
        tell_object(me,HIY"
��ϲ"HIW+me->query("name")+HIY"��ս"HIG"��"HIR"�ڰ˲���������"HIG"��"HIY"ͨ������

"HIW"ϣ��"+me->query("name")+"�ܲ����������´�"HIG"��"HIY"�ھŲ���������"HIG"��"HIW"��
	"NOR);
	me->set("quest/start_game",9);
        destruct (this_object ());
       }
{
        :: unconcious();
	tell_object(me,HIW"ϵͳ�����Ѿ�ͨ�����ԣ�ϵͳ�����κθ��ġ�\n"NOR);
	destruct(this_object());
}
}