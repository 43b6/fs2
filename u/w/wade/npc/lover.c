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
      write ( ob_name+"����˵: �������ҵ������ˡ�\n" );
      name = (string)ob->query("id");
      c_name = (string)ob->query("name");
      set_name(me->query("name")+"��"+c_name, ({ me->query("id")+"'s "+name, name }) );
    }
    else
      write ( ob_name+"������: �Բ������������ҵİ��ˡ�\n" );
  }
  else {
    master_name = master->query ( "id" );
    master_cname = master->query ( "name" );
    if ( arg == "love" || arg == "lover" )
      message_vision ( "$n����$N: �Բ������Ѿ���%s�İ����ˡ�\n",
                       master_cname+"("+master_name+")",
		       me, ob ); 
    else if ( arg == master_name )
      message_vision ( "$n����$N: $P��֪��ѽ? %s������������İ���ѽ!\n",
                       master_cname+"("+master_name+")",
                       me, ob);
    else
      message_vision ("$n����$N: ����������$N����ȥ���ҵİ��ˣ�%s�Ƚ�֪����\n",
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
             "��Ϊ��鲻����, �ܻؽ�ӹС˵��ȥ�ˡ�\n",
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
                return notify_fail("��Ļ��գ���޹����۾������� !\n");
        if( arg == "stay" ) {
                tell_object( master_player, 
                        "��Ļ��������Ļ�֮��վ��ԭ��, һ��Ҳ������\n" 
                );
        } else if( arg == "follow" ) {
                tell_object( master_player, 
                        "��Ļ��ܸ��˵����˹�����\n" 
                );
        } else command(arg);
    return 1;
}


void die()
{
        object killer, master;

        master = (object)query_leader();
        tell_object( master, 
                sprintf("\n��Ļ�����˵: ����, �����۸���, ����ұ���! һ��Ŷ!\n",
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
                sprintf("%s�ܹ�ȥ�������Ļ��!!\n",
                        master->query("c_name"))
                  , ({ master, this_object() })
        );
        tell_object( master, 
                "���ܹ�ȥΪ������Ļ���ս!!\n"
        );
        master->kill_ob(killer);
        return 0;
}
