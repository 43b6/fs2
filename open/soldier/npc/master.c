
//made in hide :P 
#include "/open/open.h" 
#include <ansi.h>
inherit NPC;
inherit F_MASTER;

void create()
{
        set_name("��켦��", ({ "lin di", "lin", "di" }) );
        set("nickname", HIR"ħ���Ͻ�"NOR);
        set("title", "�۹����Ҿ�");
        set("gender", "����");
        set("age", 42);
        set("class", "soldier");
        set("guild_master", 1);
        set("attitude", "heroism");
        set("combat_exp", 1200000);
 set("long","
    �����������ɣ�������С���ӣ�һϯ��ɫ�ľ������Ե��������ء�
  ��ϸһ�����㷢������������һ�����̣������������ǰ�ǹ����ҫ�ۡ�
  �����ǰ�ս����������η�����켦����
         ");
        set("str", 40);
        set("cor", 40);
        set("int", 24);
        set("spi", 22);
        set("cps", 30);
        set("con", 30);
        set("per", 30);
        set("max_force", 4000);
        set("force", 4000);
        set("force_factor", 15);
        set("max_kee",5500);
        set("kee",5500);
        set("max_sen",2500);
        set("sen",2500);
        set("max_gin",2500);
        set("gin",2500);
        set_skill("literate",50);
        set_skill("lance", 100);
        set_skill("power-lance", 100);
        set_skill("cure", 60);
        set_skill("dodge", 70);
        set_skill("force", 100);
        set_skill("move", 90);
        set_skill("parry", 90);
        set_skill("spforce", 90);
        set_skill("unarmed", 50);
        set_skill("eagle-steps",70);
        map_skill("lance", "power-lance");
        map_skill("parry", "power-lance");
        map_skill("force", "spforce");
        map_skill("dodge", "eagle-steps");
        map_skill("move","eagle-steps");

        set("chat_chance_combat", 50);
        set("chat_msg_combat", ({
        

        }) );

        setup();
        create_family("�۹����Ҿ�",1,HIR"ħ���Ͻ�"NOR);
        set("family/next_title", "ħ��Ӷ��");
        add_money("gold", 30);
        }

int accept_fight(object who)
{
        message_vision("��켦����$N����Ц��һ�¡�\n", who);
        command("say ز��С��!!!���Ӿ͸���������� ��\n");
        return 1;
}

void attempt_apprentice(object who)
{
        if( !who->query("class") ) {
                command("hmm");
                command("shake "+who->query("id"));
                command("say �������ְҵ������һ����ҵ��˵�ɡ�");
                return;
        }
        if( who->query("class")!="soldier" ) {
                command("sigh "+who->query("id"));
                command("say �����Ĺ���Ǻ�����ģ�������Щ�ϰ��ջ��ǹ���ȥ�ɣ�");
                return;
        }
        command("nod "+who->query("id"));
        command("say �ã���Ȼ���ѧ�Ҿ����㡣");
        command("recruit "+who->query("id"));
        command("say ��ز��!�����Ժ󲻻ᾴ���!!û��ûС!!��");
        command("hehe ");
}

int do_join()
{
        object who;
        who = this_player();

        if( who->query("class") )
                return notify_fail("���Ѿ��������������ˡ�\n");
        who->set("class", "soldier");
        message("system", HIR"������˷��𣺵۹����Ҿ��ֶ���һ���׳���-"HIY+who->query("name")+HIR"\n���Ҫ�����������۹�����\n"NOR, users());

        return 1;
}

void die()
{
        object me;
        me=query("last_attacker");
        me->set_temp("blood", 1);
        me=query_temp("last_damage_from");
        message_vision("\n",me);
        message_vision(HIM "�㿴����켦��Ӧ�����ء�\n" NOR,me);
        message_vision(" ����켦�����ϵ�����һ�����£���˳�Ƽ���������\n",me);
        tell_room(me,HIR"��켦�����: ������ɡ���!!!��������\n");
	call_out("msg2",1,me);
}
 void msg2(object me)
{	 
	message_vision("\n",me);
message_vision(HIY "ǧ�ﲻ���к��: ˳������������������!!!����������!!\n" NOR,me);

message_vision(HIG "��ŵɶ����⺰��������Χ����!!!һ��Ҳ���ܳ�ȥ!!!\n" NOR,me);
        tell_room(me,"������:���ˡ���������ˡ�Ī�ǻ������ڴ���\n");
        new("/open/soldier/npc/alo.c")->move("/open/soldier/room/r33.c");
  new("/open/soldier/npc/chan1.c")->move("/open/soldier/room/r36.c");
        ::die();
    return 0;

}

 
 
