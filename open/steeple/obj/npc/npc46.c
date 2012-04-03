#include <ansi.h>
inherit NPC;
void create()
{
        set_name("����Ī��",({"degu liu","liu"}));
        set("long","���˸�����Ī��Ϊ�ֵܣ���ʦ��������һ����ƽħ����\n");
        set("gender","����");
        set("combat_exp",7000000);
        set("attitude","aggressive");
        set("age",50);
        set("class","fighter");
        set("family/family_name","ѩ����");
        set("quests/read_snow",1);
        set("title",HIW"����Ӱ��"HIC"��ѧ֮��"NOR);
        set("force",2000000);
        set("max_gin",15000);
        set("max_sen",15000);
        set("max_kee",100000);
        set("bellicosity",5000);
        set("max_force",600000);
        set("force_factor",50);
        set("mpower",1);
        set("str",45);
        set("cor",45);
        set_skill("snow-martial", 100);
        set_skill("snowforce", 100);
        set_skill("snow-kee",100);
        set_skill("black-steps",100);
        set_skill("unarmed",100);
        set_skill("dodge",100);
        set_skill("parry",100);
        set_skill("force",100);
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
if(random(9) >= 5)
{
message_vision(HIY"����Ī�����𡮺˱��ơ�����һ������ʱ������ӡ��������ţ�\n"NOR,me);
for(j=0;j < i;j++) {
target[j]->add("kee",-3000); }
   }
   else
   {
message_vision(HIC"����Ī���ĸ�ƣ�������𡮶����ش����䡯һ������Ӳ��췢������ʱ����ٱ���\n"NOR,me);
    me->delete_busy();
    me->clear_condition();
if(random(9) >= 5) {
    me->receive_curing("kee",4000);
    me->receive_heal("kee",4000); }
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
if(me->query("quest/start_game")< 47)
       {
        tell_object(users(),HIY"
��ϲ"HIW+me->query("name")+HIY"��ս"HIG"��"HIR"����ʮ������������"HIG"��"HIY"ͨ������

"HIW"ϣ��"+me->query("name")+"�ܲ����������´�"HIG"��"HIY"����ʮ�߲���������"HIG"��"HIW"��
	"NOR);
	me->set("quest/start_game",47);
        destruct (this_object ());
       }
{
        :: unconcious();
	tell_object(me,HIW"ϵͳ�����Ѿ�ͨ�����ԣ�ϵͳ�����κθ��ġ�\n"NOR);
	destruct(this_object());
}
}
