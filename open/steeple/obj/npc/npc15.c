#include </open/open.h>
#include <ansi.h>
inherit NPC;

void create()
{
        set_name("��ɱ", ({ "du sa", "du", "sa" }) );
        set("nickname", "Ѫ��");
        set("title", HIW"����Ӱ��"NOR"���˹ȴ�ͷĿ");
        set("gender", "����");
        set("age", 41);
        set("class", "bandit");
        set("guild_master", 1);
    set("bellicosity", 2500);
        set("attitude", "badman");
        set("combat_exp", 5000000);
   set("long","��������������ֳ���һ��ѩ�׵ĳ��ۣ��������͸������·�һ���԰ס�
��ϸһ������ŷ������������Ѿ����ˣ�����װ����һ�������ĸֹ��������Ƕ��˹���
������η���ʮ�����֮�ף���Ѫ�֡���ɱ��");

        set("str", 40);
        set("cor", 40);
        set("int", 24);
        set("spi", 22);
        set("cps", 30);
        set("con", 30);
        set("per", 16);
        set("max_gin", 1500);
        set("max_kee", 5000);
        set("max_sen", 1500);
    set("max_force",10000);
    set("force",10000);
        set("force_factor", 10);

   set_skill("array",80);
   set_skill("magic",20);
   set_skill("spells",20);
   set_skill("bad-array",100);
  set_skill("change",100);
    set_skill("dodge", 80);
   set_skill("sword",80);
  set_skill("ghost-steps",100);
    set_skill("force", 70);
  set_skill("badforce",100);

    set_skill("move", 80);
    set_skill("parry",70);
    set_skill("unarmed",80);
set_skill("cure",50);
  set_skill("badstrike",100);
        set_skill("gamble", 50);
    set_skill("literate",30);
        map_skill("unarmed", "badstrike");
    map_skill("array", "bad-array");
        map_skill("parry", "badstrike");
        map_skill("force", "badforce");
        map_skill("dodge", "ghost-steps");
        map_skill("move", "ghost-steps");
    set("quests/badroar",1);
set("functions/evil-blade/level",100);
set("functions/badroar/level",50);

    set("chat_chance_combat", 60);
        set("chat_msg_combat", ({
                (: perform_action, "unarmed.evil-blade" :),
        (: perform_action, "unarmed.badroar" :),
        }) );

        setup();
        create_family("���˹�",1,"��ͷĿ");
        set("family/next_title", "С��");
        add_money("gold", 10);
        carry_object(BAD_OBJ"badhelmet")->wear();
    carry_object(BAD_OBJ"evil_claw.c")->wield();
}


int accept_fight(object who)
{
        message_vision("��ɱ���������$Nһ�ۡ�\n", who);
        command("say �ߣ����������ļһ\n");
        return 1;
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
if(me->query("quest/start_game")< 16)
       {
        message_vision(HIY"
��ϲ"HIW+me->query("name")+HIY"��ս"HIG"��"HIR"��ʮ�����������"HIG"��"HIY"ͨ������

"HIW"ϣ��"+me->query("name")+"�ܲ����������´�"HIG"��"HIY"��ʮ������������"HIG"��"HIW"��
	"NOR,me);
	me->set("quest/start_game",16);
        destruct (this_object ());
       }
{
        :: unconcious();
	tell_object(me,HIW"ϵͳ�����Ѿ�ͨ�����ԣ�ϵͳ�����κθ��ġ�\n"NOR);
	destruct(this_object());
}
}


