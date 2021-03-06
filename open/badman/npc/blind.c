#include </open/open.h>
#include <ansi.h>

inherit NPC;

void greeting(object me);

void create()
{
      set_name("盲眼人",({"blind person","blind","person"}) );
      set("long",@LONG
一个两眼失明的人，好像遗失了什么东西，正茫然的站在街头，似乎等待着
你的协助(help)。
LONG
      );
      set("age",40);
      set("gender","男性");
      set("attitude","friendly");

      set_skill("dodge",20);
      set_skill("unarmed",10);
      set_skill("parry",20);
      set("combat_exp",300);

      set("chat_chance",1);
      set("chat_msg",({
          "盲眼人满身大汗的蹲在地上摸索，似乎在找寻什么。\n",
          "盲眼人喃喃自语的说道：糟了、糟了，要怎么办才好？\n",
      }) );

      set("inquiry",([
          "协助" : "你...你能帮我找回我的拐杖吗?\n",
          "help" : "我的拐杖弄丢了，你能帮我找吗？\n",
          "拐杖" : "我刚刚不知和谁相撞，这一撞、拐杖便不见了。\n",
      ]) );

      setup();

      carry_object("/obj/cloth")->wear();
      add_money("coin",20);
}

void init()
{
      object me;
      ::init();
      if( interactive( me=this_player() ) && !is_fighting() ) {
            remove_call_out("greeting");
            call_out("greeting",1,me);
      }
}

void greeting(object me)
{
      if( !me||environment(me)!=environment() ) return;
      else
      say ("盲眼人问道：呃...阁下是否能帮小弟一个忙？\n");
}

int accept_object(object me,object ob)
{
      object mask;
      me=this_player();
      if( ob->query("id")=="crutch" ) {
            tell_object(me,
            "盲人喜道：啊！是我的拐杖没错，多谢大侠、多谢。小弟无以回报...\n");
            message_vision("盲眼人伸手到怀里摸了摸。\n", me);
            tell_object(me,
            "盲人喜道：嗯...有了，大侠、这是我的一点心意，你就收下吧！\n");
            message_vision("盲眼人拿出了一件物事，交到了$N的手中。\n",me);
            mask = new(BAD_OBJ"mask");
            mask -> move(me);
            tell_object(me,
            "盲人说道：反正这东西我也用不到，就送给您好了。我先走了，大侠、告辞。\n");
            destruct(this_object());
            return 1;
      }
      else
      return notify_fail("盲人苦笑道：阁下就别和我开玩笑了吧！\n");
}
