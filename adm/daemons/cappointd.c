#include <ansi.h>

inherit F_CLEAN_UP;

void create() { seteuid( getuid() ); }

varargs object get_user_ob(string name)
{
        object ob;

        ob = new(LOGIN_OB);
        ob->set("id", name);
        if (!ob->restore())
        {
          write("没这个物件!!!\n");
          destruct(ob);
          return ob;
        }
        return ob;
}
varargs object get_user_body(object ob)
{
        object body;

        body=LOGIN_D->make_body(ob);
                if (body->restore())
                {
                  return body;
                }
                else
                {
                  write("没这个身体!!!\n");
                  destruct(body);
                  return 0;
                }
}
