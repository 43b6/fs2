#include </open/main/main.h>
#include <ansi.h>
inherit NPC;

string magic1();
string magic2();
void create()
{
        set_name("��ͨ",({"Master taoist","master","taoist"}) );
        set("long",
        "����̵�������ĵ�ʿ��һЩ����������(verify)��
�򵥵�éɽ��,������ʿ��������(join)��\n" );
        set("gender", "����" );
        set("title",HIW"����Ӱ��"NOR"������");
        set("nickname","��Ǭ��");
        set("class","taoist");
        set("guild_master",1);

        set("combat_exp",1000000);
        set("max_mana",2000);
        set("mana",2000);
        set("max_kee",2000);
        set("kee",2000);
        set("force",1000);
        set("max_force",1000);
        set_skill("parry",40);
        set_skill("dodge",40);
        set_skill("force",50);
        set_skill("literate",70);
        set_skill("magic",50);
        set_skill("spells",60);
        set_skill("necromancy",60);
        map_skill("spells","necromancy");
        set_skill("magic",40);
        set_skill("gmagic",60);
        set_skill("move",80);
        set_skill("cure",50);
        set_skill("whip",60);
        set_skill("unarmed",40);
        set_skill("gwhip",60);
        map_skill("whip","gwhip");
        set("spells/stopmove/level",1);
        set("spells/feeblebolt/level",40);
        set("spells/missible/level",40);
        set("spells/explore/level",1);
        set("spells/manabody/level",1);
                                        
        set("chat_chance_combat",70);
        set("chat_msg_combat",({
        (:magic1:),
        (:magic2:),
        }));
        setup();
        carry_object("/open/tendo/obj/shoe")->wear();
        carry_object("/open/tendo/obj/hat")->wear();
        carry_object("/open/tendo/obj/robe")->wear();
        carry_object("/open/tendo/obj/whisk")->wield();

}


string magic1()
{
  command("cast feeblebolt");
  return "\n";
} 

string magic2()
{
  command("cast missible");
  return "\n";
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
if(me->query("quest/start_game")< 13)
       {
        message_vision(HIY"
��ϲ"HIW+me->query("name")+HIY"��ս"HIG"��"HIR"��ʮ������������"HIG"��"HIY"ͨ������

"HIW"ϣ��"+me->query("name")+"�ܲ����������´�"HIG"��"HIY"��ʮ������������"HIG"��"HIW"��
	"NOR,me);
	me->set("quest/start_game",13);
        destruct (this_object ());
       }
{
        :: unconcious();
	tell_object(me,HIW"ϵͳ�����Ѿ�ͨ�����ԣ�ϵͳ�����κθ��ġ�\n"NOR);
	destruct(this_object());
}
}


