
#include <marksman.h>
#include <ansi.h>
inherit NPC;

void create()
{
        set_name("���Ʒ�",({"dragon fly","dragon","fly"}) );
        set("long",
        "�����ɵ�һ����ӣ��������ŵ��Ӷ��辭�������\n
        \n");
        set("gender", "����" );
set("combat_exp",300000);
        set("max_force"   , 2000);
set("force",2000);
        set("force_factor", 10);
        set("class","marksman");
        set("title","�����ɵ�һ�����");
        set_skill("unarmed",20);
set_skill("iceforce",70);
map_skill("force","iceforce");
        set_skill("parry",40);
        set_skill("dodge",60);
set("functions/ten_kee/level",60);
create_family("������",3,"�����");
        set_skill("force", 60);
        set_skill("literate",60);
        set_skill("archery",50);
        set_skill("god-shooting", 60);
        set_skill("move",40);
        set_skill("rain-steps",80);
        map_skill("archery","god-shooting");
        map_skill("parry","rain-steps");
set("chat_chance_combat",10);
set("chat_msg_combat",({
(: perform_action("archery.ten_kee") :),
(: command("supershoot") :),
}));
        set("max_kee",3000);
        setup();
carry_object(C_OBJ"/bow-5")->wield();  
carry_object(C_OBJ"/arrow-5");
}

void init()
{
 add_action("do_say","say");
}

int do_say(string str)
{
 object me;
 me=this_player();
 if(str=="û��")
 {
 if(me->query("family/family_name")=="������")
 {
if(!present("arrow",me))
 {
 command("hmm");
 command("say û����ϰ!..�ð�!��ʦ�ָ���");
 new(C_OBJ"/arrow-1")->move(me);
}
}
}
}
int accept_kill(object ob)
{
command("say ��.û����.������");
command("cmd holdup arrow with bow");
command("kill"+ob->query("id"));
return 1;
}
int accept_fight(object ob)
{
command("say �����ʦ�ֽ���ѽ.�ܺ�.���Ͻ���");
command("say ע����!���І�");
command("cmd holdup arrow with bow");
return 1;
}

