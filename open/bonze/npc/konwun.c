inherit NPC;
void create()
{
          set_name("����",({"kon wun","wun"}));
          set("title","���ŽӴ�����");
          set("gender","����");
          set("age",55);
          set("long","�����������¿��ֱ���ɮ�ˣ���Ҫ����Ӵ��ÿ͵Ĺ����������������ţ���ʵȴ����ز�¶��\n");
          set("combat_exp",5000000);
          set("cor",10);
        set_skill("dodge",100);
        set_skill("unarmed",100);
        set_skill("longfist",100);
        set_skill("parry",100);
        set_skill("force",100);
        set_skill("haoforce",100);
        map_skill("force","haoforce");
        map_skill("unarmed","longfist");
        set("force",5000);
        set("max_force",5000);
        set("max_gin",3000);
        set("gin",3000);
        set("max_kee",3000);
        set("kee",3000);
        set("max_sen",3000);
          set("spi",35);
          set("str",50);
          set("chat_msg", ({
            "���ź�ʮ˵��:���������а������ϵ���ʷ\n",
            "��������˵��:���ֵ����������У�����ֻ��ǿ��\n",
            "����˵��:ʩ���������е���?\n"}));
         setup();
}
int accept_fight(object who)
{
        command("say �����Ͻ�������䣬������¡�\n");
        return 0;
}
