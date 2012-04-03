#include <ansi.h>
inherit NPC;
inherit SSERVER;
string ask_gblade();
string help_yuan();
string ask_ba();
string ask_lotch();
string ask_blade();
void do_surrender();

void create()
{
        set_name("��Ԫ��",({"yuan"}));
        set("long","һ�����ڴ��ӵ��ɽ����� , ���㿴����ʱ�� , �㷢�������۽�����һ˿�ƻ�����ɫ !\n");
        set("gender","����");
        set("combat_exp",20000);
        set("attitude","peaceful");
        set("age",26);
        set("class","blademan");
        set("str",20);
        set("cor", 30);
        set("per", 25);
        set("int", 30);
        set("cps",20);
        set("con", 30);
        set("spi", 15);
        set("kar", 30);
        set_skill("unarmed",30);
        set_skill("dodge",30);
        set_skill("parry",30);
        set("chat_chance_combat",100);
        set("chat_msg_combat",({
        (: do_surrender :)
        }));
        set("inquiry",([
        "����"  : "�� , �����ҵı��������������ʶ������� \n",
        "����"  :  "���� , Ѱ�ҿ��İ� ? \n",
        "�Ͻ���������"  : (: help_yuan :),
        "������"   :  (: ask_lotch :),
        "��Ԫ��"  : (: ask_ba :),
        "����"  :  (: ask_gblade :),
        "������"  :  (: ask_blade :)
        ]));
        setup();
        add_money("silver",1);
        set("chat_msg",({"chat chat \n"}));
}
void init()
{
        object ob;
        ::init();
        if(interactive(ob=this_player() ) && !is_fighting() )
        {
        remove_call_out("greeting");
        call_out("greeting",2,ob);
        }
        set_heart_beat(1);
}
void greeting(object ob)
{
        if(ob->query_temp("help_yuan") )
        {
        command("say лл���� , �Ҿ͸������������������ !");
        command("say ��ʵ�������Ǳ�ħ����͵�ߵ� !");
        ob->set("lotch",5);
        ob->delete_temp("help_yuan");
        }
}
void do_surrender()
{
        object target, *enemy;
        int i;
        enemy=this_object()->query_enemy();
        i=sizeof(enemy);
        target = offensive_target(this_object());
        if(!target) return ;
        if(target->query_temp("know_blade")&&target->query_temp("know_gblade") )
        {
        if(!target->query("marks/��������") && this_object()->query("kee")<60 )
        {
        message_vision("��Ԫ��˵�� : ���� , ������ , ���������������� !\n",target );
        new("/open/gblade/obj/dragon-blade")->move(target);
        target->set("marks/��������",1);
        target->delete_temp("know_blade");
        target->delete_temp("know_gblade");
        message_vision("��Ԫ���ó��������� , ������$N\n",target);
        target->remove_enemy(this_object());
        this_object()->remove_enemy(target);
        }
        }
}
string help_yuan()
{
         if(this_player()->query("quests/lotch") || this_player()->query("lotch")>4)
        return "����һ�ż�ǿ�ĵ��� !";
        if(this_player()->query("lotch")>3)
        {
        command("say �һ��ǽ�ϲ��ѧ�˵��� !");
        this_player()->set_temp("can_help_yuan",1);
        return "���ܰ�����ʦ������ , ����ʦ���� ?";
        }
        return "�� , �õ��� !";
}
string ask_lotch()
{
        if(this_player()->query("quests/lotch") )
        return "�� , ������������ , �ɱ�ץ�Ұ� !\n";
        if(this_player()->query("lotch")<4)
        return "ʲô��������ħ�� , �߿� , ������ !\n";
        command("say ����Ϊ�����õ� ? ");
        command("say �Ҹ���һ�� , ֻ����һ���պ��� !");
        return "�����ҵ���֪�������������� ! \n";
}
string ask_ba()
{
        if(this_player()->query("quests/lotch") || this_player()->query("lotch")>4)
        return "���Ƕ�ʦ !\n";
        if(this_player()->query("lotch")<3)
        return "��Ԫ�� , ��˭�� , �������ӵ�ͦ����� !\n";
return "�� , ���� , ˵ʲô���������� , Ӳ�ǲ������Ͻ��������� \n";
}
string ask_blade()
{
        if(!present("dragon-tiger blade",this_player()) && this_player()->query("marks/��������")&& this_player()->query("marks/��������")!=1)
        {
            command("say Ū���˰� �� ���ñ��Ҽ��˻��� ");
        new("/open/gblade/obj/dragon-blade")->move(this_player());
        message_vision("��Ԫ�������������� $N .\n",this_player());
        return "�úñ��ܺ� , �´ο�û��ô������ !\n";
        }
            if(this_player()->query("quests/lotch") || this_player()->query("lotch")>4)
        return "���Ծ���ȥ������ʦ�� !\n";
        if(this_player()->query("lotch")<3)
        return "�Ҳ�֪������˵ʲ ?";
        if(this_player()->query("marks/��������") )
        return "�Ҳ��Ǹ����� !\n";
        if(!this_player()->query_temp("know_gblade") )
        {
        this_player()->set_temp("know_blade",1);
        command("fear");
        return "�㻹֪��Щʲô ?";
        }
        command("say �����㶼֪���� !");
        this_player()->set_temp("know_blade",1);
        this_object()->kill_ob(this_player() );
        return "һ���� , ������ , ������ !\n";
}
string ask_gblade()
{
        if(this_player()->query("quests/lotch") || this_player()->query("lotch")>4)
        return "���ǽ�������õ����ɰ� ! �Ͽ�������ǰ� !\n";
        if(this_player()->query("lotch")<3)
        return "ʲô���Ű� , û���� , ��������ɽ�ǿ�� ?\n";
        if(!this_player()->query_temp("know_blade"))
        {
        this_player()->set_temp("know_gblade",1);
        command("hmm");
        return "�㻹֪��Щʲô ?\n";
        }
        command("say ��Ȼ�㶼֪���� , �Ҿ��������� !");
        this_player()->set_temp("know_gblade",1);
        this_object()->kill_ob(this_player());
        return "С�� , �������� !\n";
}
void heart_beat()
{
        if(this_object()->query("kee") < 60){
        do_surrender();
        if(!this_object()->query_temp("�ظ�")){
        this_object()->add("kee",10);
        this_object()->add("gin",10);
        this_object()->add("sen",10);
        this_object()->set_temp("�ظ�",1);
        }
        }
        ::heart_beat();
}
