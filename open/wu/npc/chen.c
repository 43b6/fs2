// chen.c
#include <ansi.h>
inherit NPC;
void create()
{
        set_name("������", ({ "hong_son_chen", "chen", }) );
        set("title"   , "ȭ����ͷ");
        set("nickname", "��������");
        set("gender"  , "����" );
        set("age", 27);
        set("str", 30);
        set("int", 29);
        set("long","����������ɽ��ݵ�ȭ����ͷ,��ɽȭ�������Դ�����뻯�ľ����ټ�������˼����,���Ա�������������,�������е��ӡ�\n");

        set("attitude"      , "heroism");
        set("combat_exp",400000);
        set("force"         , 2500);
        set("max_force"     , 2000);
        set("force_factor"  , 10);
        set("super_fire",1);
         set("env/���","YES");
        set_skill("lungshan", 80);
        set_skill("dodge"   , 50);
        set_skill("haoforce", 50);
        set_skill("force"   , 70);
        set_skill("unarmed", 90);
        set_skill("parry", 60);
        set_skill("dodge",40);
        set_skill("henma-steps",40);
        set_skill("fire-kee",60);
        map_skill("force", "haoforce");
        map_skill("unarmed", "lungshan");
        map_skill("dodge", "henma-steps");
        map_skill("parry", "fire-kee");
        set("chat_chance_combat",65);
        set("chat_msg_combat",({
//             (: perform_action, "force.kang_kee"   :),
//              (: "cmd god_kee"   :)
        }));
        setup();
        carry_object(__DIR__"obj/fight_robe")->wear();
       carry_object("/open/wu/obj/ring1.c")->wield();
        add_money("gold", 8);
}

int accept_fight(object me)
{
        if( (string)me->query("family/family_name")=="��ɽ��" ) {
                command("nod");
                command("say ���а�!");
                return 1;
        }
        command("say ���ŷԸ����������������Ŀ��˹��С�");
        return 0;
}
