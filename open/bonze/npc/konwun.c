inherit NPC;
void create()
{
          set_name("空闻",({"kon wun","wun"}));
          set("title","寺门接待首座");
          set("gender","男性");
          set("age",55);
          set("long","空闻是少林寺空字辈的僧人，主要负责接待访客的工作，看似温文儒雅，其实却是深藏不露。\n");
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
            "空闻合十说道:少林寺已有百年以上的历史\n",
            "空闻朗声说道:少林弟子首重修行，练武只是强身\n",
            "空闻说道:施主是来修行的吗?\n"}));
         setup();
}
int accept_fight(object who)
{
        command("say 本寺严禁对外比武，还请见谅。\n");
        return 0;
}
