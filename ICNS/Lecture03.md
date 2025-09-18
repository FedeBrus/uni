### Likelihood and Impact
Likelihood refers to the likelihood of a certain attack exploiting a certain vulnerability, while impact is defined as the negative consequences on a stakeholder in relation to a certain system, 
Risk must be minimized to respect to each stakeholder involved (Pareto optimality problem).
### Threat model
Security is only meaningful with respect to a threat model.
A threat model is a structured representation of all the information that affects the security of an application, i.e. it is a view of the application and its environment rhough the lens of security.
It typically includes:
- Description of the system to be modelled.
- Assumptions that can be checked/challenged in the future as the threat landscape changes.
- Potential threats to the system.
- Controls that can be taken to mitigate each threat.
- A way of validating the model and threats, and verification of success of controls taken.
The threat landscape is ever changing and always evolving, so assumptions need to be challenged periodically. If an assumption were to be wrong, then security is nullified.
### Risk
Risk is the multiplication between impact and likelihood. We can create a risk matrix (5x5). Evaluating likelihood and impact is hard and not straightforward in every situtation.
Beware that mitigations have a cost, in both their deployment and their maintenance. Also not all mititgations reduce risk, because the deployment of a mitigation changes the threat landscape and a new threat evaluation has to take place.

---
High level specification
|
| programming language
| compiler
| executable
| CPU architecture
|
Implementation of a security mechanisms

So the implementation of a security mechanisms is far away from its perfect form specification, the different layers of abstraction can introduce vulnerabilities.
