//master of cure
//change by adam

#include <ansi.h>
#include <marksman.h>
inherit NPC;
inherit F_MASTER;
int time=0;

void create()
{
        set_name("����",({"Master houng","master","houng"}) );
        set("long",
        "����ʱ�����������£��廢��֮һ��������ʥ�ع���������\n
        \n");
        set("nickname",HIC"�ٲ�����"NOR);
        set("gender", "����" );
        set("combat_exp",1000000);
        set("force"       , 4000);
        set("max_force"   , 4000);
        set("force_factor", 20);
        set("class","marksman");
        set("title","�����ɿ�ɽ��ʦ");
        set("family/family_name","������");
        set("guild_master",1);
        set_skill("unarmed",60);
        set_skill("parry",40);
set("no_lyssa",1);
        set_skill("dodge",60);
        set_skill("force", 60);
        set_skill("literate",60);
        set_skill("archery",100);
        set_skill("god-shooting", 80);
set("functions/ten_kee/level",100);
        set_skill("move",40);
        set_skill("rain-steps",80);
        map_skill("archery","god-shooting");
        map_skill("parry","rain-steps");
set("chat_chance_combat",1);
set("chat_msg_combat", ({
(: perform_action("archery.ten_kee") :),
}));

        setup();
carry_object(C_OBJ"/bow-10")->wield();
carry_object(C_OBJ"/arrow-9");
}

void init()
{
        add_action("do_join","join");
        set_heart_beat(1);
}

int do_join(string str)
{
        object me=this_player();
        if(str!=0)
          return notify_fail("���\"join\"���ɡ�\n");
        if(me->query("class")=="marksman")
        return notify_fail("�㲻Ҫ����Ц�ˣ��㲻����ͼ�������\n");
if( me->query("class"))
return notify_fail("���Ѿ������˱�Ĺ����ˡ�\n");
        me->set("class","marksman");

        tell_object(me,"�����㣡���Ѿ���Ϊ�����ɵ�һԱ�ˣ��ú�Ŭ���ɡ�\n");
         message("system",HIC "����������Ц :\n
         ��ӭ" +this_player()->name()+ "���������� !\n
         �������ֺ�������� !\n
         ��λ����� ,��Ŀ�Դ��� !!\n\n"NOR,users());
                
        
        
        return 1;
}
int accept_fight(object ob)
{
command("say �Ϸ�ܾ�û����.�´򲻹�����");
command("say ��������λ���ͣ�����г��⣬�Ǿ��������");
command("cmd holdup arrow with bow");
return 1;
}
int accept_kill(object ob)
{
command("say �Ϸ���������.������������");
command("cmd holdup arrow with bow");
return 1;
}
