inherit NPC;
inherit F_MASTER;
void create()
{
        set_name("����",({"lord duan","lord","duan"}));
        set("long","���Ʊ��ǵ�����ϲ���ƽ����, ͬʱҲ�Ƕμ���ѧ�ĵ�ʮ������, "+
"��Ȼ��Ϊ��ү, ����һ���ӵ�īˮ, ����һ���洫����ѧȴҲû��, ��˵������˫ȫ, "+
"Ҳ��Ϊ���, �������Ƿǳ�������ѧ����, �������μ���ѧ������, �����һλ�������ɡ�\n");
        set("gender","����");
        set("class","scholar");
        set("nickname","ƽ����");
        set("combat_exp",1000000);
        set("attitude","heroism");
        set("age",50);
        set("str", 44);
        set("cor", 24);
        set("cps", 18);
        set("per", 24);
        set("int", 42);
        set("force",3000);
        set("max_force",3000);
        set_skill("literate",100);
        set_skill("force", 85);
        set_skill("dodge", 60);
        set_skill("move", 60);
        set_skill("parry", 40);
        set_skill("sunforce",100);
        set_skill("six-fingers",100);
        map_skill("force","sunforce");
        map_skill("unarmed","six-fingers");
        map_skill("dodge","six-fingers");
        set("force_factor",10);
        setup();
        add_money("gold",10);
        create_family("�μ�",10,"������");
}
  void attempt_apprentice(object me)
{
        write("�ܺã�" + RANK_D->query_respect(me) + "���Ŭ����"+
              "���ձض��гɡ�\n");
        command("recruit " + me->query("id") );
}
