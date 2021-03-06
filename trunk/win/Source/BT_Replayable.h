// Copyright 2012 Google Inc. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef BT_REPLAYABLE
#define BT_REPLAYABLE

/* 
* An interface which defines a series of actions that can be "played".
*/
class Replayable
{
public:
	enum State
	{
		Stopped,
		Paused,
		Running, 
		Completed
	};

protected:
	// State			_previousState;
	State			_currentState;

public:
	Replayable();
	virtual ~Replayable();

	virtual void	play();
	virtual void	pause();
	virtual void	stop();
	virtual Replayable::State	update() = 0;

	virtual State	getPlayState() const;
};

#endif // BT_REPLAYABLE