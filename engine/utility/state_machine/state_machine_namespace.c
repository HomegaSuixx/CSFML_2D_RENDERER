/*
** EPITECH PROJECT, 2018
** CSFML_2D_RENDERER
** File description:
** state_machine_namespace
*/

#include "utility/state_machine.h"

OmStateMachineS *OmStateMachine_create(size_t stack_size);
void OmStateMachine_destroy(OmStateMachineS *handle);
void OmStateMachine_push(OmStateMachineS *handle, int state);
int OmStateMachine_pop(OmStateMachineS *handle);
int OmStateMachine_fetch_top(OmStateMachineS *handle);

_OmStateMachine const OmStateMachine = {
    OmStateMachine_create,
    OmStateMachine_destroy,
    OmStateMachine_push,
    OmStateMachine_pop,
    OmStateMachine_fetch_top
};