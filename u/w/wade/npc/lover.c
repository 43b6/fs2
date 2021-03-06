// this file is called by every pet files
#include <move.h>

inherit NPC;

void init()
{
  add_action ( "do_ask", "ask" );
}

int do_ask ( string s )
{
  object me;
  object ob;
  object master;
  string master_name, master_cname, ob_name, ob_id;
  string ob_sex, my_sex, ask_who;
  string name, c_name;
  string arg;

  master = (object)query_leader();
  ob = this_object();
  ob_name = ob->name();
  ob_id   = ob->query("id");
  me = this_player();
  if (sscanf ( s, "%s about %s", ask_who, arg ) != 2) return 0;
  if (ask_who != ob_id) return 0;
  my_sex = me->query ( "gender" );
  ob_sex = ob->query ( "gender" );
  
  if ( !master ) {
    if ( (arg == "love" || arg == "lover") && (my_sex != ob_sex) ) {
      set_leader ( me );
      write ( ob_name+"对你说: 我终于找到爱人了。\n" );
      name = (string)ob->query("id");
      c_name = (string)ob->query("name");
      set_name(me->query("name")+"的"+c_name, ({ me->query("id")+"'s "+name, name }) );
    }
    else
      write ( ob_name+"告诉你: 对不起，我正在找我的爱人。\n" );
  }
  else {
    master_name = master->query ( "id" );
    master_cname = master->query ( "name" );
    if ( arg == "love" || arg == "lover" )
      message_vision ( "$n告诉$N: 对不起，我已经是%s的爱人了。\n",
                       master_cname+"("+master_name+")",
		       me, ob ); 
    else if ( arg == master_name )
      message_vision ( "$n告诉$N: $P不知道呀? %s是我梦寐以求的爱人呀!\n",
                       master_cname+"("+master_name+")",
                       me, ob);
    else
      message_vision ("$n告诉$N: 这问题我想$N还是去问我的爱人，%s比较知道。\n",
                      master_cname+"("+master_name+")",
                      me, ob);
  }
  return 1;
}

void disappear(object pet)
{
  string pet_type;

  if( !pet ) return;
  if ( !pet->query_leader() ) return;

  tell_room( environment(pet),
             pet->query("name")+
             "因为伙伴不见了, 跑回金庸小说里去了。\n",
             pet
           );
  destruct (pet);
}

void receive_message(string class, string msg)
{
        string who, dir, master, item;
        object master_player, ob;

        ob = this_object();
        if ( (int)ob->query ( "have_partner" ) == 0 ) return;

        master_player = ob->query_leader();

// if no master or master dead, then destruct me, wuwu.....
        if( !master_player ) {
          call_out("disappear",2,ob);
          return;
        }

        if ( present(master_player,environment(ob)) )
            return;
        if ( !query("stop") )
                this_object()->move_player( environment(master_player), "" );
            return ;
}

int order_me(string arg)
{
        object master_player;
        string dir;

    master_player = (object)query_leader();
// added by Kyoko, prevent if more than 1 pet here....
    if( this_player() != master_player ) return 0;
// make the order cmd work.
        if( !arg || arg == "quit" || sscanf(arg,"get %s",dir) )
                return notify_fail("你的伙伴眨着无辜的眼睛看着你 !\n");
        if( arg == "stay" ) {
                tell_object( master_player, 
                        "你的伙伴听了你的话之后，站在原地, 一动也不动。\n" 
                );
        } else if( arg == "follow" ) {
                tell_object( master_player, 
                        "你的伙伴很高兴地跑了过来。\n" 
                );
        } else command(arg);
    return 1;
}


void die()
{
        object killer, master;

        master = (object)query_leader();
        tell_object( master, 
                sprintf("\n你的伙伴对你说: 老兄, 有人欺负我, 请帮我报仇! 一定哦!\n",
                        killer->query("name"))
        );
        ::die();
}

int call_help()
{
        object master, killer;
        master = (object)query_leader();
        killer = (object)this_object()->query_attacker();
        if( !killer || !master || master->query_attacker() || 

                !present(master, environment(this_object())) ) return 0;
        tell_room( environment(this_object()), 
                sprintf("%s跑过去保护他的伙伴!!\n",
                        master->query("c_name"))
                  , ({ master, this_object() })
        );
        tell_object( master, 
                "你跑过去为保护你的伙伴而战!!\n"
        );
        master->kill_ob(killer);
        return 0;
}
