// sun_jen.c
// ��������������-by nike-
#include <ansi.h>
inherit NPC;

string ask_pnx();
string ask_wine();

void create()
{
        set_name("�γ���", ({ "trainer jen", "jen" }) );
        set("title", "��ɽ�ɵڰ˴������μҴ���");
        set("nickname", "�ƿ�");
        set("gender", "����" );
        set("age",30);
        set("str", 30);
        set("int", 24);
        set("inquiry",([
             "���"     :  (: ask_wine :),
             "�����"     :  (: ask_pnx :), 
                "here": "�������μ��������, �����к���ָ��?\n",
                "name": "��������, ������, �Ǳ��ݵĸ�������",
                "lungshan": "�....��Ϊ���ݾ�ѧ, ���¶Դ������о�,���ɼҸ�����!\n",
        ]));
        set("long",
                 "�γ�������ɽ�ɰ�����μҴ���, �����μҵĳ���, ����ʹ�õġ���ɽ\n" +
                 "��ѧ��(Lungshan)���丸�����������֮��ѧ, ������Ϊ���ӱ����Է�\n" +
                 "����ɽ��Ϊ����, �����С����ϰ��, ��ȭ�����丸��������, ������\n" +
                 "�Ⱦ�����, ȴ��������, ���������ѧ��, ʹ���ʤһ��, ����ʤ��\n" +
                 "֮��, ͬʱ����ó��������ھ�, ���Դ�Ҷ�����Ϊ�� �ƿ� ����\n");
        set("attitude", "heroism");
        set("env/���","YES");
        set("combat_exp", 500000);
        set("force",2800);
        set("max_force", 2800);
        set("force_factor", 15);
        set("super_fire",1);
        set_skill("lungshan", 90);
        set_skill("dodge"   , 50);
        set_skill("haoforce", 60);
        set_skill("force"   , 70);
        set_skill("unarmed", 70);
        set_skill("parry", 70);
        set_skill("henma-steps",60);
        set_skill("fire-kee",50);
        map_skill("force", "haoforce");
        map_skill("unarmed", "lungshan");
        map_skill("dodge", "henma-steps");
        map_skill("parry", "fire-kee");
        set("chat_chance_combat",65);
        set("chat_msg_combat",({
            (: perform_action, "force.kang_kee"   :),
        }));
        setup();
         carry_object(__DIR__"obj/fight_robe")->wear();
         carry_object("/open/wu/npc/obj/fireclaw.c")->wield();
         carry_object(__DIR__"obj/armband")->wear();
}
int accept_object(object me, object ob)
{
    string name = ob->query("name");

    if(me->query("get_wine") == 1)
{
    if(name == HIR"<��>"HIC"ʮ�����ű�"NOR)
{
        command("snort "+me->query("id"));
        command("say ��...���ɶ��...��...���ڲ�����");
        command("drinking");
        call_out("say_pnx",3,me);
        return 1;
    }
  }
}
int say_pnx(object me)
{
    object ob;

        write(HIY"�γ����л��㱵�˵����mmm...˵��������ɽ�ɵ�����ʥ�ޣ��������ţ�\n"NOR,me);
        write(HIY"�γ����л��㱵�˵������...�������ڳ�ƨ��...�ܣ�...������...��ë�����Ǿ�������...\n"NOR,me);
        write(HIY"�γ����л��㱵�˵�����ҿ�...�ܣ�������..�������Ƶķ���...�͸������ȥ...�ܣ�ȥ�ο���...\n"NOR,me);
        write(HIY"�γ����л��㱵�˵�����ܣ��ؾ���֮Կ����...���...��...���ҿɲ�...����֤��...�ܣ����ܳɹ���...�õ���ë�...\n"NOR,me);
        ob=new("/open/doctor/obj/key");
        ob->move(me);
        me->set("get_key",1);
        me->delete("get_wine");
        destruct(ob);
        return 1;
}
string ask_pnx()
{
    object me=this_player();

    if(me->query("ask_baby")==1)
{
        command("arc "+me->query("id"));
        command("say ɶ��...��...�����ڣ��ܣ���...��ĳ����");
        command("say �ף���...�����Ĩܣ�..λ�ڣ�����������Һ�....�Ⱦƣ�������");
        command("drinking");
        command("cow");
        command("say �ɶ���û����...�ܣ�ι���Ǹ�˭...����ȥ���...�죡");
        me->delete("ask_baby");
        me->set("ask_wine");
  }
}
string ask_wine()
{
    object me=this_player();

    if(me->query("ask_wine")==1)
{
        command("slap "+me->query("id"));
        command("say ��ͷ���㣡��Ȼ�ǵ�...��...��...��....z��Z��");
        command("sleep");
        write(HIY"�γ���ģģ������˵���λ�����...��������...����..��������...mmm...\n"NOR);
        me->delete("ask_wine");
        me->set("ask_flor");
  }
}
