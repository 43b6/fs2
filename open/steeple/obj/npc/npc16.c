#include <ansi.h>
#include "/open/open.h"
inherit NPC;
string poison();
void create()
{
        set_name("ׯ����",({"master low","low"}));
        set("long","�����������������ŷ�ɥ����ڤ��ħ�̽�����ׯ���ᡱ������һ����������������Ϊ�˿���ʮ��������\n");
        set("gender","Ů��");
	set("title",HIW"����Ӱ��"NOR);
        set("class","poisoner");
        set("nickname", HIR "��������" NOR);
        set("combat_exp",5000000);
        set("attitude","heroism");
        set("age",26);
        set("str", 44);
        set("cor", 24);
        set("cps", 18);
        set("per", 24);
        set("int", 48);
        set("force",10000);
        set("max_kee",5000);
        set("kee", 5000);
        set("bellicosity",1500);
        set("chat_chance_combat",80);
        set("chat_msg_combat",({
         (: poison :),
         (: perform_action("poison.five") :),
         (: perform_action("poison.firefinger") :),
        }));
        set("functions/firefinger/level",100);
     set("functions/five/level",100);
        set_skill("literate",30);
        set("max_force",10000);
        set_skill("move",120);
        set_skill("force",60);
        set_skill("dodge",120);
        set_skill("parry",50);
        set_skill("poison",120);
        set_skill("whip",100);
        set_skill("poisonforce",100);
        map_skill("force","poisonforce");
        set("force_factor",20);
        set_skill("coldpoison",100);
        set_skill("nine-steps",120);
        map_skill("dodge","nine-steps");
        map_skill("move","nine-steps");
        map_skill("poison","coldpoison");
        set_skill("ming-snake",100);
        map_skill("whip","ming-snake");
        setup();
        create_family("ڤ��ħ��",3,"����");
carry_object("open/poison/obj/circle.c")->wear();
carry_object(POISON_OBJ"bleed_whip")->wield();
carry_object("open/poison/obj/godcloth.c")->wear();
carry_object("open/poison/obj/cape.c")->wear();
carry_object("open/poison/obj/feather.c")->wear();
carry_object("/obj/poison/rose_poison")->set_amount(70);
carry_object("/obj/poison/five_poison")->set_amount(70);
carry_object("/obj/poison/dark_poison")->set_amount(70);
carry_object("/obj/poison/faint_poison")->set_amount(70);
}
string poison()
{
        command("perform poison.faint");
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
if(me->query("quest/start_game")< 17)
       {
        message_vision(HIY"
��ϲ"HIW+me->query("name")+HIY"��ս"HIG"��"HIR"��ʮ������������"HIG"��"HIY"ͨ������

"HIW"ϣ��"+me->query("name")+"�ܲ����������´�"HIG"��"HIY"��ʮ�߲���������"HIG"��"HIW"��
	"NOR,me);
	me->set("quest/start_game",17);
        destruct (this_object ());
       }
{
        :: unconcious();
	tell_object(me,HIW"ϵͳ�����Ѿ�ͨ�����ԣ�ϵͳ�����κθ��ġ�\n"NOR);
	destruct(this_object());
}
}


