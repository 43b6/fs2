// trainer2.c

#include <ansi.h>
inherit NPC;

void create()
{
        set_name("������", ({ "fist_trainer jen", "jen", "trainer" }) );
        set("title"   , "ȭ������");
        set("nickname", "С�");
        set("gender"  , "����" );

        set("age", 26);
        set("str", 26);
        set("int", 29);

        set("long",
                "��������������ݵ�ȭ������, �����μҵĶ�����, ��������ᵫ����\n" +
                "ȭ��ȴ�Ǵ˹���һ�����ġ���������С����������������, �ֿᰮ����\n" +
                "ʹ������Ϊƽ�ϳ�����������ȫ��, �����С� С� ��֮�ơ�\n" );

        set("attitude"      , "heroism");

        set("combat_exp",300000);
        set("force"         , 300);
        set("max_force"     , 300);
        set("force_factor"  , 10);

        set("inquiry", ([
                "here": "�������μ��������, �����к���ָ��?\n",
                "name": "��������, ������, �Ǳ��ݵ�ȭ������\n",
                "lungshan": "�����..��Ϊ���ݾ�ѧ, ���¶Դ������ĵ�, ���ɼҸ����ڡ�\n",
        ]) );

        set_skill("literate", 80);
        set_skill("lungshan", 50);
        set_skill("dodge"   , 50);
        set_skill("haoforce", 50);
        set_skill("force"   , 70);

        map_skill("unarmed", "lungshan");
        map_skill("dodge"  , "lungshan");
        map_skill("force"  , "haoforce");

        setup();
        set("chat_chance"   , 25);
        set("chat_msg",
             ({
                // HIW "����Ի: ���֮�� , ����Ϊ��Ҳ.......\n"NOR,
                HIW "������˴�ͬƪ: ���֮�� , ����Ϊ��Ҳ.......\n"NOR,
                HIW "��������˵��: ������������, ������֮��\n"NOR,
                HIW "�����ƴ��һ��: ��! ���׸��ҵ�\"�����ľ�\"�أ��ֲ����ˣ��ҵļ�����\n"NOR,
             })
           );

        setup();
        carry_object(__DIR__"obj/fight_robe")->wear();
carry_object("/open/wu/npc/obj/silverclaw.c")->wield();

}

int recognize_apprentice(object ob)
{
        if( (string)ob->query("family/family_name")=="��ɽ��" ) return 1;

        command("say ��Ǹ����λ" + RANK_D->query_respect(ob) + "��������������ݵĵ��ӡ�");
        return notify_fail( "�����Ʋ�Ը�����ȭ����\n");
}

int accept_fight(object me)
{
        if( (string)me->query("family/family_name")=="��ɽ��" ) {
                command("nod");
                command("say ���а�!");
                return 1;
        }
        command("say �����Ը����������������Ŀ��˹��С�");
        return 0;
}
