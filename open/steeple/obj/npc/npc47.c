#include <ansi.h>
inherit NPC;
void create()
{
        set_name("����Ī��",({"degu mou","mou"}));
        set("long","�����Ƕ����ӵĵ��ӣ���ʦ��������һ����ƽħ����\n");
        set("gender","����");
        set("combat_exp",17000000);
        set("attitude","aggressive");
        set("age",50);
        set("class","fighter");
        set("family/family_name","ѩ����");
        set("quests/read_snow",2);
        set("title",HIW"����Ӱ��"HIC"��ѧ֮��"NOR);
        set("force",3000000);
        set("max_gin",20000);
        set("max_sen",20000);
        set("max_kee",100000);
        set("bellicosity",5000);
        set("max_force",700000);
        set("force_factor",60);
        set("str",45);
        set("mpower",1);
        set("cor",45);
        set_skill("snow-martial", 120);
        set_skill("snowforce", 120);
        set_skill("snow-kee",120);
        set_skill("black-steps",120);
        set_skill("unarmed",120);
        set_skill("dodge",120);
        set_skill("parry",120);
        set_skill("force",120);
        map_skill("unarmed", "snow-martial");
        map_skill("parry","snow-kee");
        map_skill("force", "snowforce");
        map_skill("dodge", "black-steps");
        set_temp("apply/armor",100);
        set_temp("apply/damage",100);
        setup();
        carry_object("/open/snow/obj/figring")->wield();
        add_money("gold", 20);
}
void heart_beat()
{
object me,room,*target;
int i,j;
me=this_object();
room=environment(me);
target=me->query_enemy(room);
if(i=sizeof(target)) {
if(random(100) > 50)
{
if(random(9) >= 3)
{
message_vision(HIY"����Ī�������ױ��ơ�����һ������ʱ������ӡ��������ţ�\n"NOR,me);
for(j=0;j < i;j++) {
target[j]->add("kee",-4000); }
   }
   else
   {
message_vision(HIC"����Ī���ĸ�ƣ�������𡮶����ش����䡯һ������Ӳ��췢������ʱ����ٱ���\n"NOR,me);
    me->delete_busy();
    me->clear_condition();
if(random(9) >= 5) {
    me->receive_curing("kee",5000);
    me->receive_heal("kee",5000); }
   }
}
  }
  ::heart_beat();
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
if(me->query("quest/start_game")< 48)
       {
        tell_object(users(),HIY"
��ϲ"HIW+me->query("name")+HIY"��ս"HIG"��"HIR"����ʮ�߲���������"HIG"��"HIY"ͨ������

"HIW"ϣ��"+me->query("name")+"�ܲ����������´�"HIG"��"HIY"����ʮ�˲���������"HIG"��"HIW"��
	"NOR);
	me->set("quest/start_game",48);
        destruct (this_object ());
       }
{
        :: unconcious();
	tell_object(me,HIW"ϵͳ�����Ѿ�ͨ�����ԣ�ϵͳ�����κθ��ġ�\n"NOR);
	destruct(this_object());
}
}
