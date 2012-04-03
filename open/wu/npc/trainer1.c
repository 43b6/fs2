// trainer.c
#include <ansi.h>
inherit NPC;

void create()
{
        set_name("�γ���", ({ "trainer jen", "jen" }) );
        set("title", "��ɽ�ɵڰ˴������μҴ���");
        set("nickname", "�ƿ�");
        set("gender", "����" );
        set("age",30);
        set("str", 30);
        set("int", 24);

        set("long",
                 "�γ�������ɽ�ɰ�����μҴ���, �����μҵĳ���, ����ʹ�õġ���ɽ\n" +
                 "��ѧ��(Lungshan)���丸�����������֮��ѧ, ������Ϊ���ӱ����Է�\n" +
                 "����ɽ��Ϊ����, �����С����ϰ��, ��ȭ�����丸��������, ������\n" +
                 "�Ⱦ�����, ȴ��������, ���������ѧ��, ʹ���ʤһ��, ����ʤ��\n" +
                 "֮��, ͬʱ����ó��������ھ�, ���Դ�Ҷ�����Ϊ�� �ƿ� ����\n");

        set("attitude", "heroism");

        set("combat_exp", 300000);
        set("force",800);
        set("max_force", 800);
        set("force_factor", 10);

        set("inquiry", ([
                "here": "�������μ��������, �����к���ָ��?\n",
                "name": "��������, ������, �Ǳ��ݵĸ�������",
                "lungshan": "�....��Ϊ���ݾ�ѧ, ���¶Դ������о�,���ɼҸ�����!\n",
        ]) );

        set_skill("unarmed" , 80);
        set_skill("lungshan", 90);
        set_skill("dodge"   , 60);
        set_skill("force"   , 60);

        map_skill("unarmed", "lungshan");
        map_skill("dodge"  , "lungshan");
        map_skill("force"  , "haoforce");

        setup();
         carry_object(__DIR__"obj/fight_robe")->wear();
carry_object("/open/wu/npc/obj/fireclaw.c")->wield();
         carry_object(__DIR__"obj/armband")->wear();
}

int recognize_apprentice(object ob)
{
        if( (string)ob->query("family/family_name")=="��ɽ��" ) return 1;

        command("say �Բ�����λ" + RANK_D->query_respect(ob) + "��������������ݵĵ��ӡ�");
        return notify_fail( "�γ�����Ը�����ȭ����\n");
}

int accept_fight(object me)
{
        if( (string)me->query("family/family_name")=="��ɽ��" ) {
                command("nod");
                command("say ����!");
                return 1;
        }
        command("say �����Ը����������������Ŀ��˹��С�");
        return 0;
}
