#ifndef GAME_CMD_EDUSER_H
#define GAME_CMD_EDUSER_H

///////////////////////////////////////////////////////////////////////////////

class UserEdit : public AbstractBuiltin
{
protected:
    PostAction doExecute( Context& );

public:
    UserEdit();
    ~UserEdit();
};

///////////////////////////////////////////////////////////////////////////////

#endif // GAME_CMD_EDUSER_H